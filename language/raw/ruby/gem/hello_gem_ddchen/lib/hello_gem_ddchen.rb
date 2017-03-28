# The main hello driver

class Hello_gem_ddchen
    # Say hi to the world!
    #
    # Example:
    #   >> Hello_gem_ddchen("spanish")
    #   => hola mundo
    # 
    # Arguments:
    #   language: (String)
    #
    def self.hi(language = "english")
        translator = Translator.new(language)
        translator.hi
    end
end

require 'hello/translator'
