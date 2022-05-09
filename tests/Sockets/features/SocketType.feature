Feature: SocketType
    communication type

    Scenario Outline: SocketType
        Given I have defined <class>.
        When I wanted a <method> return.
        Then the return result should be <result>

        Examples:
            | class      | method   | result |
            | SocketType | Stream   | 1      |
            | SocketType | Datagram | 2      |