Feature: ProtocolType
    Specifies the protocols that the Socket class supports

    Scenario Outline: ProtocolType
        Given I have defined <class>.
        When I wanted a <method> return.
        Then the return result should be <result>

        Examples:
            | class        | method | result |
            | ProtocolType | Ip     | 0      |
            | ProtocolType | Icmp   | 1      |
            | ProtocolType | Igmp   | 2      |
            | ProtocolType | Ggp    | 3      |
            | ProtocolType | IpV4   | 4      |

