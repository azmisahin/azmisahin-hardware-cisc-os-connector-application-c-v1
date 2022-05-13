Feature: IpEndPoint
    Represents a network endpoint as an IP address and a port number

    Scenario Outline: IpAddres and Port Number
        Given I have defined the ip endpoint.
        And I entered the data <ipAddres> and <portNumber> in the ip endpoint.
        When I wanted a <class> return.
        Then the return result should be <result>

        Examples:
            | ipAddres | portNumber | class      | result   |
            | IpAddres | 53         | IpEndPoint | ipAddres |
