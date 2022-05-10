Feature: Help
    Module command helper

    Scenario Outline: Show String
        Given I have defined.
        And I entered the data <values>.
        When I wanted a <method> display.
        Then the return result should be <result>

        Examples:
            | values  | method  | result  |
            |         | Usage   | "Usage" |
            | "hello" | Display | "hello" |
            | 1       | Display | "1"     |
