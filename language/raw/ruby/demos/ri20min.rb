#!/usr/bin/env ruby

class MegaGreeter
    attr_accessor :names

    # Create the object
    def initialize(names = "world")
        @names = names
    end

    # Say hi to everybody
    def say_hi
        if @names.nil?
            puts "..."
        elsif @names.respond_to? ("each")
            # @name is a list of some kind, iterate!
            @names.each do |name|
                puts "Hello #{name}!"
            end
        else
            puts "Hello #{@names}!"
        end
    end

    # say by to everybody
    def say_bye
        if @names.nil?
            puts "..."
        elsif @names.respond_to?("join")
            puts "Goodbye #{@names.join(", ")}. Come back soon!"
        else
            puts "Goodbye #{@names}. Come back soon!"
        end
    end
end

if __FILE__ == $0
    mg = MegaGreeter.new
    mg.say_hi
    mg.say_bye

    # Change name to be "Zeke"
    mg.names = "Zeke"
    mg.say_hi
    mg.say_bye

    # change the name to an array of names
    mg.names = ["Albert", "Brendda"]
    mg.say_hi
    mg.say_bye

    # change to nil
    mg.names = nil
    mg.say_hi
    mg.say_bye
end
