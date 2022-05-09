Feature: Socket
    managed interface for network access

    Scenario Outline: Socket Defination
        Given I have defined <class>.
        When I wanted a <method> return.
        Then the return result should be <result>

        Examples:
            | class  | method      | result |
            | Socket | Constractor | Socket |
            | Socket | Connect     | true   |
            | Socket | Send        | 1      |
            | Socket | Receive     | 1      |
            | Socket | Id          | 1      |
