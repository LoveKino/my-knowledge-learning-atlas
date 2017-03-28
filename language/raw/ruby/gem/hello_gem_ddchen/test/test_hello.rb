require "minitest/autorun"
require "hello_gem_ddchen"

print Minitest

class Hello_Test < Minitest::Unit::TestCase
    def test_english_hello
        assert_equal "hello world", Hello_gem_ddchen.hi("english")
    end

    def test_any_hello
        assert_equal "hello world", Hello_gem_ddchen.hi("ruby")
    end

    def test_spanish_hello
        assert_equal "hola mundo", Hello_gem_ddchen.hi("spanish")
    end
end
