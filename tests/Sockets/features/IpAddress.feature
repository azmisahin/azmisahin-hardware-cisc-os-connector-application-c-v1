Feature: IpAddress
    A regular ip address definition

    Scenario Outline: Show String
        Given I have defined the ip address.
        And I entered the data <values> in the ip address.
        When I wanted a <method> return.
        Then the return result should be <result>

        Examples:
            | values      | method   | result      |
            | "127.0.0.1" | ToString | "127.0.0.1" |
            | "1"         | ToString | ""          |
