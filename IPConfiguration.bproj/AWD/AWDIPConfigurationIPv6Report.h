// This file was automatically generated by protocompiler
// DO NOT EDIT!
// Compiled from stdin

#import <Foundation/Foundation.h>
#import <ProtocolBuffer/PBCodable.h>

#import "AWDIPConfigurationGlobalEnums.h"

#ifdef __cplusplus
#define AWDIPCONFIGURATIONIPV6REPORT_FUNCTION extern "C"
#else
#define AWDIPCONFIGURATIONIPV6REPORT_FUNCTION extern
#endif

@interface AWDIPConfigurationIPv6Report : PBCodable <NSCopying>
{
    uint64_t _timestamp;
    NSString *_apnName;
    uint32_t _autoconfAddressAcquisitionSeconds;
    uint32_t _controlQueueUnsentCount;
    uint32_t _defaultRouterCount;
    uint32_t _dhcpv6AddressAcquisitionSeconds;
    uint32_t _dnsConfigurationAcquisitionSeconds;
    uint32_t _expiredDefaultRouterCount;
    uint32_t _expiredPrefixCount;
    AWDIPConfigurationInterfaceType _interfaceType;
    uint32_t _prefixCount;
    uint32_t _routerSolicitationCount;
    BOOL _autoconfAddressAcquired;
    BOOL _autoconfAddressDeprecated;
    BOOL _autoconfAddressDetached;
    BOOL _autoconfAddressDuplicated;
    BOOL _autoconfDnssl;
    BOOL _autoconfRdnss;
    BOOL _autoconfRestarted;
    BOOL _dhcpv6AddressAcquired;
    BOOL _dhcpv6DnsDomainList;
    BOOL _dhcpv6DnsServers;
    BOOL _linklocalAddressDuplicated;
    BOOL _manualAddressConfigured;
    BOOL _prefixLifetimeNotInfinite;
    BOOL _routerLifetimeNotMaximum;
    BOOL _routerLifetimeZero;
    BOOL _routerSourceAddressCollision;
    struct {
        int timestamp:1;
        int autoconfAddressAcquisitionSeconds:1;
        int controlQueueUnsentCount:1;
        int defaultRouterCount:1;
        int dhcpv6AddressAcquisitionSeconds:1;
        int dnsConfigurationAcquisitionSeconds:1;
        int expiredDefaultRouterCount:1;
        int expiredPrefixCount:1;
        int interfaceType:1;
        int prefixCount:1;
        int routerSolicitationCount:1;
        int autoconfAddressAcquired:1;
        int autoconfAddressDeprecated:1;
        int autoconfAddressDetached:1;
        int autoconfAddressDuplicated:1;
        int autoconfDnssl:1;
        int autoconfRdnss:1;
        int autoconfRestarted:1;
        int dhcpv6AddressAcquired:1;
        int dhcpv6DnsDomainList:1;
        int dhcpv6DnsServers:1;
        int linklocalAddressDuplicated:1;
        int manualAddressConfigured:1;
        int prefixLifetimeNotInfinite:1;
        int routerLifetimeNotMaximum:1;
        int routerLifetimeZero:1;
        int routerSourceAddressCollision:1;
    } _has;
}


@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) uint64_t timestamp;

@property (nonatomic) BOOL hasInterfaceType;
@property (nonatomic) AWDIPConfigurationInterfaceType interfaceType;
- (NSString *)interfaceTypeAsString:(AWDIPConfigurationInterfaceType)value;
- (AWDIPConfigurationInterfaceType)StringAsInterfaceType:(NSString *)str;

@property (nonatomic, readonly) BOOL hasApnName;
@property (nonatomic, retain) NSString *apnName;

@property (nonatomic) BOOL hasLinklocalAddressDuplicated;
@property (nonatomic) BOOL linklocalAddressDuplicated;

@property (nonatomic) BOOL hasAutoconfAddressDuplicated;
@property (nonatomic) BOOL autoconfAddressDuplicated;

@property (nonatomic) BOOL hasAutoconfAddressDeprecated;
@property (nonatomic) BOOL autoconfAddressDeprecated;

@property (nonatomic) BOOL hasAutoconfAddressDetached;
@property (nonatomic) BOOL autoconfAddressDetached;

@property (nonatomic) BOOL hasAutoconfAddressAcquired;
@property (nonatomic) BOOL autoconfAddressAcquired;

@property (nonatomic) BOOL hasAutoconfRestarted;
@property (nonatomic) BOOL autoconfRestarted;

@property (nonatomic) BOOL hasAutoconfRdnss;
@property (nonatomic) BOOL autoconfRdnss;

@property (nonatomic) BOOL hasAutoconfDnssl;
@property (nonatomic) BOOL autoconfDnssl;

@property (nonatomic) BOOL hasDhcpv6AddressAcquired;
@property (nonatomic) BOOL dhcpv6AddressAcquired;

@property (nonatomic) BOOL hasDhcpv6DnsServers;
@property (nonatomic) BOOL dhcpv6DnsServers;

@property (nonatomic) BOOL hasDhcpv6DnsDomainList;
@property (nonatomic) BOOL dhcpv6DnsDomainList;

@property (nonatomic) BOOL hasManualAddressConfigured;
@property (nonatomic) BOOL manualAddressConfigured;

@property (nonatomic) BOOL hasPrefixLifetimeNotInfinite;
@property (nonatomic) BOOL prefixLifetimeNotInfinite;

@property (nonatomic) BOOL hasRouterLifetimeNotMaximum;
@property (nonatomic) BOOL routerLifetimeNotMaximum;

@property (nonatomic) BOOL hasRouterSourceAddressCollision;
@property (nonatomic) BOOL routerSourceAddressCollision;

@property (nonatomic) BOOL hasRouterLifetimeZero;
@property (nonatomic) BOOL routerLifetimeZero;

@property (nonatomic) BOOL hasDefaultRouterCount;
@property (nonatomic) uint32_t defaultRouterCount;

@property (nonatomic) BOOL hasExpiredDefaultRouterCount;
@property (nonatomic) uint32_t expiredDefaultRouterCount;

@property (nonatomic) BOOL hasPrefixCount;
@property (nonatomic) uint32_t prefixCount;

@property (nonatomic) BOOL hasExpiredPrefixCount;
@property (nonatomic) uint32_t expiredPrefixCount;

@property (nonatomic) BOOL hasRouterSolicitationCount;
@property (nonatomic) uint32_t routerSolicitationCount;

@property (nonatomic) BOOL hasControlQueueUnsentCount;
@property (nonatomic) uint32_t controlQueueUnsentCount;

@property (nonatomic) BOOL hasAutoconfAddressAcquisitionSeconds;
@property (nonatomic) uint32_t autoconfAddressAcquisitionSeconds;

@property (nonatomic) BOOL hasDhcpv6AddressAcquisitionSeconds;
@property (nonatomic) uint32_t dhcpv6AddressAcquisitionSeconds;

@property (nonatomic) BOOL hasDnsConfigurationAcquisitionSeconds;
@property (nonatomic) uint32_t dnsConfigurationAcquisitionSeconds;

// Performs a shallow copy into other
- (void)copyTo:(AWDIPConfigurationIPv6Report *)other;

// Performs a deep merge from other into self
// If set in other, singular values in self are replaced in self
// Singular composite values are recursively merged
// Repeated values from other are appended to repeated values in self
- (void)mergeFrom:(AWDIPConfigurationIPv6Report *)other;

AWDIPCONFIGURATIONIPV6REPORT_FUNCTION BOOL AWDIPConfigurationIPv6ReportReadFrom(AWDIPConfigurationIPv6Report *self, PBDataReader *reader);

@end

