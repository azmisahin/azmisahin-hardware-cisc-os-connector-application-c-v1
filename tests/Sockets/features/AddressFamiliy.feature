Feature: AddressFamiliy
    Specifies the addressing scheme that an instance of the Socket class can use

    Scenario Outline: AddressFamiliy
        Given I have defined <class>.
        When I wanted a <method> return.
        Then the return result should be <result>

        Examples:
            | class          | method       | result |
            | AddressFamiliy | Unix         | 1      |
            | AddressFamiliy | InterNetwork | 2      |
