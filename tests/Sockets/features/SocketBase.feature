Feature: SocketBase
    managed interface for network access

    Scenario Outline: SocketBase Defination
        Given I have defined <class>.
        When I wanted a <method> return.
        Then the return result should be <result>

        Examples:
            | class      | method      | result |
            | SocketBase | Constractor | Socket |
            | SocketBase | Connect     | true   |
            | SocketBase | Send        | 1      |
            | SocketBase | Receive     | 1      |
            | SocketBase | Id          | 1      |
