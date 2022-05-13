Feature: IpAddress
    A regular ip address definition

    Scenario Outline: Show String
        Given I have defined the ip address like a.root-servers.net.
        And I entered the IP address <hostName> and the Port number <portNumber>.
        When I wanted a <method> return.
        Then the return result should be <result>

        Examples:
            | hostName     | portNumber | method   | result       |
            | "198.41.0.4" | 53         | ToString | "198.41.0.4" |
            | "1"          | 53         | ToString | ""           |
