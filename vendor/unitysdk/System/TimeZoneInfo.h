#pragma once
#include "../unitysdk.h"

namespace Microsoft::Win32 { class RegistryKey; }

#define SYSTEM_TIMEZONEINFO_GETADJUSTMENTRULES_OFFSET UNITYSDK_OFFSET(0x9265800)
#define SYSTEM_TIMEZONEINFO_POPULATEALLSYSTEMTIMEZONES_OFFSET UNITYSDK_OFFSET(0x92658F0)
#define SYSTEM_TIMEZONEINFO_POPULATEALLSYSTEMTIMEZONESFROMREGISTRY_OFFSET UNITYSDK_OFFSET(0x9265AC0)
#define SYSTEM_TIMEZONEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x92667B0)
#define SYSTEM_TIMEZONEINFO_CHECKDAYLIGHTSAVINGTIMENOTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x92673B0)
#define SYSTEM_TIMEZONEINFO_CREATEADJUSTMENTRULEFROMTIMEZONEINFORMATION_OFFSET UNITYSDK_OFFSET(0x9266A90)
#define SYSTEM_TIMEZONEINFO_FINDIDFROMTIMEZONEINFORMATION_OFFSET UNITYSDK_OFFSET(0x9267870)
#define SYSTEM_TIMEZONEINFO_GETLOCALTIMEZONE_OFFSET UNITYSDK_OFFSET(0x9268010)
#define SYSTEM_TIMEZONEINFO_GETLOCALTIMEZONEFROMWIN32DATA_OFFSET UNITYSDK_OFFSET(0x92687A0)
#define SYSTEM_TIMEZONEINFO_GETDATETIMENOWUTCOFFSETFROMUTC_OFFSET UNITYSDK_OFFSET(0x9268A00)
#define SYSTEM_TIMEZONEINFO_TRANSITIONTIMEFROMTIMEZONEINFORMATION_OFFSET UNITYSDK_OFFSET(0x9267590)
#define SYSTEM_TIMEZONEINFO_TRYCREATEADJUSTMENTRULES_OFFSET UNITYSDK_OFFSET(0x9269A30)
#define SYSTEM_TIMEZONEINFO_TRYGETTIMEZONEENTRYFROMREGISTRY_OFFSET UNITYSDK_OFFSET(0x926A690)
#define SYSTEM_TIMEZONEINFO_TRYCOMPARESTANDARDDATE_OFFSET UNITYSDK_OFFSET(0x926A740)
#define SYSTEM_TIMEZONEINFO_TRYCOMPARETIMEZONEINFORMATIONTOREGISTRY_OFFSET UNITYSDK_OFFSET(0x9267B30)
#define SYSTEM_TIMEZONEINFO_TRYGETLOCALIZEDNAMEBYMUINATIVERESOURCE_OFFSET UNITYSDK_OFFSET(0x926A780)
#define SYSTEM_TIMEZONEINFO_TRYGETLOCALIZEDNAMEBYNATIVERESOURCE_OFFSET UNITYSDK_OFFSET(0x926AAE0)
#define SYSTEM_TIMEZONEINFO_GETLOCALIZEDNAMESBYREGISTRYKEY_OFFSET UNITYSDK_OFFSET(0x926AD10)
#define SYSTEM_TIMEZONEINFO_TRYGETTIMEZONEFROMLOCALMACHINE_OFFSET UNITYSDK_OFFSET(0x926B100)
#define SYSTEM_TIMEZONEINFO_TRYGETTIMEZONEFROMLOCALREGISTRY_OFFSET UNITYSDK_OFFSET(0x926B280)
#define SYSTEM_TIMEZONEINFO_GET_HAVEREGISTRY_OFFSET UNITYSDK_OFFSET(0x9265A30)
#define SYSTEM_TIMEZONEINFO_ENUMDYNAMICTIMEZONEINFORMATION_OFFSET UNITYSDK_OFFSET(0x926BD30)
#define SYSTEM_TIMEZONEINFO_GETDYNAMICTIMEZONEINFORMATION_OFFSET UNITYSDK_OFFSET(0x926BE90)
#define SYSTEM_TIMEZONEINFO_GETDYNAMICTIMEZONEINFORMATIONEFFECTIVEYEARS_OFFSET UNITYSDK_OFFSET(0x926BFE0)
#define SYSTEM_TIMEZONEINFO_GETTIMEZONEINFORMATIONFORYEAR_OFFSET UNITYSDK_OFFSET(0x926C180)
#define SYSTEM_TIMEZONEINFO_CREATEADJUSTMENTRULEFROMTIMEZONEINFORMATION_OFFSET UNITYSDK_OFFSET(0x926C320)
#define SYSTEM_TIMEZONEINFO_TRANSITIONTIMEFROMTIMEZONEINFORMATION_OFFSET UNITYSDK_OFFSET(0x926C890)
#define SYSTEM_TIMEZONEINFO_TRYCREATETIMEZONE_OFFSET UNITYSDK_OFFSET(0x926CB30)
#define SYSTEM_TIMEZONEINFO_GETLOCALTIMEZONEINFOWINRTFALLBACK_OFFSET UNITYSDK_OFFSET(0x9268450)
#define SYSTEM_TIMEZONEINFO_FINDSYSTEMTIMEZONEBYIDWINRTFALLBACK_OFFSET UNITYSDK_OFFSET(0x926B870)
#define SYSTEM_TIMEZONEINFO_GETSYSTEMTIMEZONESWINRTFALLBACK_OFFSET UNITYSDK_OFFSET(0x9265D20)
#define SYSTEM_TIMEZONEINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x926D680)
#define SYSTEM_TIMEZONEINFO_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x926D690)
#define SYSTEM_TIMEZONEINFO_GET_STANDARDNAME_OFFSET UNITYSDK_OFFSET(0x926D6F0)
#define SYSTEM_TIMEZONEINFO_GET_DAYLIGHTNAME_OFFSET UNITYSDK_OFFSET(0x926D750)
#define SYSTEM_TIMEZONEINFO_GET_BASEUTCOFFSET_OFFSET UNITYSDK_OFFSET(0x926D7B0)
#define SYSTEM_TIMEZONEINFO_GET_SUPPORTSDAYLIGHTSAVINGTIME_OFFSET UNITYSDK_OFFSET(0x926D7C0)
#define SYSTEM_TIMEZONEINFO_GETPREVIOUSADJUSTMENTRULE_OFFSET UNITYSDK_OFFSET(0x926D7D0)
#define SYSTEM_TIMEZONEINFO_GETUTCOFFSET_OFFSET UNITYSDK_OFFSET(0x926D8D0)
#define SYSTEM_TIMEZONEINFO_GETLOCALUTCOFFSET_OFFSET UNITYSDK_OFFSET(0x926DDE0)
#define SYSTEM_TIMEZONEINFO_GETUTCOFFSET_OFFSET UNITYSDK_OFFSET(0x926DED0)
#define SYSTEM_TIMEZONEINFO_GETUTCOFFSET_OFFSET UNITYSDK_OFFSET(0x926D940)
#define SYSTEM_TIMEZONEINFO_CONVERTTIME_OFFSET UNITYSDK_OFFSET(0x926DFD0)
#define SYSTEM_TIMEZONEINFO_CONVERTTIME_OFFSET UNITYSDK_OFFSET(0x926E2F0)
#define SYSTEM_TIMEZONEINFO_CONVERTTIMETOUTC_OFFSET UNITYSDK_OFFSET(0x926F770)
#define SYSTEM_TIMEZONEINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x926F860)
#define SYSTEM_TIMEZONEINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x926FA30)
#define SYSTEM_TIMEZONEINFO_FROMSERIALIZEDSTRING_OFFSET UNITYSDK_OFFSET(0x926FAA0)
#define SYSTEM_TIMEZONEINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x926FDA0)
#define SYSTEM_TIMEZONEINFO_GETSYSTEMTIMEZONES_OFFSET UNITYSDK_OFFSET(0x926D300)
#define SYSTEM_TIMEZONEINFO_HASSAMERULES_OFFSET UNITYSDK_OFFSET(0x926F8B0)
#define SYSTEM_TIMEZONEINFO_GET_LOCAL_OFFSET UNITYSDK_OFFSET(0x9268F60)
#define SYSTEM_TIMEZONEINFO_TOSERIALIZEDSTRING_OFFSET UNITYSDK_OFFSET(0x9270000)
#define SYSTEM_TIMEZONEINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9270510)
#define SYSTEM_TIMEZONEINFO_GET_UTC_OFFSET UNITYSDK_OFFSET(0x9270570)
#define SYSTEM_TIMEZONEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x926BBF0)
#define SYSTEM_TIMEZONEINFO_CREATECUSTOMTIMEZONE_OFFSET UNITYSDK_OFFSET(0x9268710)
#define SYSTEM_TIMEZONEINFO_SYSTEM.RUNTIME.SERIALIZATION.IDESERIALIZATIONCALLBACK.ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x92705C0)
#define SYSTEM_TIMEZONEINFO_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x92707C0)
#define SYSTEM_TIMEZONEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9270950)
#define SYSTEM_TIMEZONEINFO_GETADJUSTMENTRULEFORTIME_OFFSET UNITYSDK_OFFSET(0x926EA10)
#define SYSTEM_TIMEZONEINFO_GETADJUSTMENTRULEFORTIME_OFFSET UNITYSDK_OFFSET(0x9270DB0)
#define SYSTEM_TIMEZONEINFO_COMPAREADJUSTMENTRULETODATETIME_OFFSET UNITYSDK_OFFSET(0x9270F70)
#define SYSTEM_TIMEZONEINFO_CONVERTTOUTC_OFFSET UNITYSDK_OFFSET(0x9271120)
#define SYSTEM_TIMEZONEINFO_CONVERTFROMUTC_OFFSET UNITYSDK_OFFSET(0x92712F0)
#define SYSTEM_TIMEZONEINFO_CONVERTTOFROMUTC_OFFSET UNITYSDK_OFFSET(0x9271140)
#define SYSTEM_TIMEZONEINFO_CONVERTUTCTOTIMEZONE_OFFSET UNITYSDK_OFFSET(0x926F490)
#define SYSTEM_TIMEZONEINFO_GETDAYLIGHTTIME_OFFSET UNITYSDK_OFFSET(0x926EA30)
#define SYSTEM_TIMEZONEINFO_GETISDAYLIGHTSAVINGS_OFFSET UNITYSDK_OFFSET(0x926EFE0)
#define SYSTEM_TIMEZONEINFO_GETDAYLIGHTSAVINGSSTARTOFFSETFROMUTC_OFFSET UNITYSDK_OFFSET(0x9271FA0)
#define SYSTEM_TIMEZONEINFO_GETDAYLIGHTSAVINGSENDOFFSETFROMUTC_OFFSET UNITYSDK_OFFSET(0x9272060)
#define SYSTEM_TIMEZONEINFO_GETISDAYLIGHTSAVINGSFROMUTC_OFFSET UNITYSDK_OFFSET(0x9269000)
#define SYSTEM_TIMEZONEINFO_CHECKISDST_OFFSET UNITYSDK_OFFSET(0x92718B0)
#define SYSTEM_TIMEZONEINFO_GETISAMBIGUOUSTIME_OFFSET UNITYSDK_OFFSET(0x9271B30)
#define SYSTEM_TIMEZONEINFO_GETISINVALIDTIME_OFFSET UNITYSDK_OFFSET(0x926EB60)
#define SYSTEM_TIMEZONEINFO_GETUTCOFFSET_OFFSET UNITYSDK_OFFSET(0x926E110)
#define SYSTEM_TIMEZONEINFO_GETUTCOFFSETFROMUTC_OFFSET UNITYSDK_OFFSET(0x926E050)
#define SYSTEM_TIMEZONEINFO_GETUTCOFFSETFROMUTC_OFFSET UNITYSDK_OFFSET(0x9271310)
#define SYSTEM_TIMEZONEINFO_GETUTCOFFSETFROMUTC_OFFSET UNITYSDK_OFFSET(0x92720E0)
#define SYSTEM_TIMEZONEINFO_TRANSITIONTIMETODATETIME_OFFSET UNITYSDK_OFFSET(0x9271380)
#define SYSTEM_TIMEZONEINFO_TRYGETTIMEZONE_OFFSET UNITYSDK_OFFSET(0x9266570)
#define SYSTEM_TIMEZONEINFO_TRYGETTIMEZONEFROMLOCALMACHINE_OFFSET UNITYSDK_OFFSET(0x92723F0)
#define SYSTEM_TIMEZONEINFO_VALIDATETIMEZONEINFO_OFFSET UNITYSDK_OFFSET(0x9266FC0)
#define SYSTEM_TIMEZONEINFO_UTCOFFSETOUTOFRANGE_OFFSET UNITYSDK_OFFSET(0x9272700)
#define SYSTEM_TIMEZONEINFO_GETUTCOFFSET_OFFSET UNITYSDK_OFFSET(0x9272880)
#define SYSTEM_TIMEZONEINFO_ISVALIDADJUSTMENTRULEOFFEST_OFFSET UNITYSDK_OFFSET(0x9272820)
#define SYSTEM_TIMEZONEINFO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9272960)
#define SYSTEM_TIMEZONEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9272C70)

namespace System
{
	inline static constexpr unsigned int TimeZoneInfo_TypeDefinitionIndex = 23676;

	class TimeZoneInfo : public Il2CppObject
	{
	public:
		Il2CppObject* lazyHaveRegistry; // 0x0
		::System::String* _id; // 0x10
		::System::String* _displayName; // 0x18
		::System::String* _standardDisplayName; // 0x20
		::System::String* _daylightDisplayName; // 0x28
		::System::TimeSpan* _baseUtcOffset; // 0x30
		::System::Boolean _supportsDaylightSavingTime; // 0x38
		::Il2CppArray<::System::Object*>* _adjustmentRules; // 0x40
		::System::TimeZoneInfo* s_utcTimeZone; // 0x8
		CachedData* s_cachedData; // 0x10
		::System::DateTime* s_maxDateOnly; // 0x18
		::System::DateTime* s_minDateOnly; // 0x20
		::System::TimeSpan* MaxOffset; // 0x28
		::System::TimeSpan* MinOffset; // 0x30

		::Il2CppArray<::System::Object*>* GetAdjustmentRules()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETADJUSTMENTRULES_OFFSET))(nullptr);
		}

		::System::Void PopulateAllSystemTimeZones(CachedData* arg)
		{
			((::System::Void(*)(CachedData*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_POPULATEALLSYSTEMTIMEZONES_OFFSET))(arg, nullptr);
		}

		::System::Void PopulateAllSystemTimeZonesFromRegistry(CachedData* arg)
		{
			((::System::Void(*)(CachedData*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_POPULATEALLSYSTEMTIMEZONESFROMREGISTRY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(TIME_ZONE_INFORMATION&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(TIME_ZONE_INFORMATION&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CheckDaylightSavingTimeNotSupported(TIME_ZONE_INFORMATION&* arg)
		{
			return (return (::System::Boolean(*)(TIME_ZONE_INFORMATION&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_CHECKDAYLIGHTSAVINGTIMENOTSUPPORTED_OFFSET))(arg, nullptr);
		}

		AdjustmentRule* CreateAdjustmentRuleFromTimeZoneInformation(REG_TZI_FORMAT&* arg, ::System::DateTime* arg, ::System::DateTime* arg, ::System::Int32 arg)
		{
			return (return (AdjustmentRule*(*)(REG_TZI_FORMAT&*, ::System::DateTime*, ::System::DateTime*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_CREATEADJUSTMENTRULEFROMTIMEZONEINFORMATION_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::String* FindIdFromTimeZoneInformation(TIME_ZONE_INFORMATION&* arg, bool&* arg)
		{
			return (return (::System::String*(*)(TIME_ZONE_INFORMATION&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_FINDIDFROMTIMEZONEINFORMATION_OFFSET))(arg, arg, nullptr);
		}

		::System::TimeZoneInfo* GetLocalTimeZone(CachedData* arg)
		{
			return (return (::System::TimeZoneInfo*(*)(CachedData*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETLOCALTIMEZONE_OFFSET))(arg, nullptr);
		}

		::System::TimeZoneInfo* GetLocalTimeZoneFromWin32Data(TIME_ZONE_INFORMATION&* arg, ::System::Boolean arg)
		{
			return (return (::System::TimeZoneInfo*(*)(TIME_ZONE_INFORMATION&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETLOCALTIMEZONEFROMWIN32DATA_OFFSET))(arg, arg, nullptr);
		}

		::System::TimeSpan* GetDateTimeNowUtcOffsetFromUtc(::System::DateTime* arg, bool&* arg)
		{
			return (return (::System::TimeSpan*(*)(::System::DateTime*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETDATETIMENOWUTCOFFSETFROMUTC_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TransitionTimeFromTimeZoneInformation(REG_TZI_FORMAT&* arg, TransitionTime&* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(REG_TZI_FORMAT&*, TransitionTime&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRANSITIONTIMEFROMTIMEZONEINFORMATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryCreateAdjustmentRules(::System::String* str, REG_TZI_FORMAT&* arg, ::System::Object[]&* arg, ::System::Exception&* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::String*, REG_TZI_FORMAT&*, ::System::Object[]&*, ::System::Exception&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRYCREATEADJUSTMENTRULES_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetTimeZoneEntryFromRegistry(::Microsoft::Win32::RegistryKey* arg, ::System::String* str, REG_TZI_FORMAT&* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::Win32::RegistryKey*, ::System::String*, REG_TZI_FORMAT&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRYGETTIMEZONEENTRYFROMREGISTRY_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Boolean TryCompareStandardDate(TIME_ZONE_INFORMATION&* arg, REG_TZI_FORMAT&* arg)
		{
			return (return (::System::Boolean(*)(TIME_ZONE_INFORMATION&*, REG_TZI_FORMAT&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRYCOMPARESTANDARDDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryCompareTimeZoneInformationToRegistry(TIME_ZONE_INFORMATION&* arg, ::System::String* str, bool&* arg)
		{
			return (return (::System::Boolean(*)(TIME_ZONE_INFORMATION&*, ::System::String*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRYCOMPARETIMEZONEINFORMATIONTOREGISTRY_OFFSET))(arg, str, arg, nullptr);
		}

		::System::String* TryGetLocalizedNameByMuiNativeResource(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRYGETLOCALIZEDNAMEBYMUINATIVERESOURCE_OFFSET))(str, nullptr);
		}

		::System::String* TryGetLocalizedNameByNativeResource(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRYGETLOCALIZEDNAMEBYNATIVERESOURCE_OFFSET))(str, arg, nullptr);
		}

		::System::Void GetLocalizedNamesByRegistryKey(::Microsoft::Win32::RegistryKey* arg, ::System::String&* arg, ::System::String&* arg, ::System::String&* arg)
		{
			((::System::Void(*)(::Microsoft::Win32::RegistryKey*, ::System::String&*, ::System::String&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETLOCALIZEDNAMESBYREGISTRYKEY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		TimeZoneInfoResult* TryGetTimeZoneFromLocalMachine(::System::String* str, ::System::TimeZoneInfo&* arg, ::System::Exception&* arg)
		{
			return (return (TimeZoneInfoResult*(*)(::System::String*, ::System::TimeZoneInfo&*, ::System::Exception&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRYGETTIMEZONEFROMLOCALMACHINE_OFFSET))(str, arg, arg, nullptr);
		}

		TimeZoneInfoResult* TryGetTimeZoneFromLocalRegistry(::System::String* str, ::System::TimeZoneInfo&* arg, ::System::Exception&* arg)
		{
			return (return (TimeZoneInfoResult*(*)(::System::String*, ::System::TimeZoneInfo&*, ::System::Exception&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRYGETTIMEZONEFROMLOCALREGISTRY_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean get_HaveRegistry()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GET_HAVEREGISTRY_OFFSET))(nullptr);
		}

		::System::UInt32 EnumDynamicTimeZoneInformation(::System::UInt32 arg, DYNAMIC_TIME_ZONE_INFORMATION&* arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, DYNAMIC_TIME_ZONE_INFORMATION&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_ENUMDYNAMICTIMEZONEINFORMATION_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 GetDynamicTimeZoneInformation(DYNAMIC_TIME_ZONE_INFORMATION&* arg)
		{
			return (return (::System::UInt32(*)(DYNAMIC_TIME_ZONE_INFORMATION&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETDYNAMICTIMEZONEINFORMATION_OFFSET))(arg, nullptr);
		}

		::System::UInt32 GetDynamicTimeZoneInformationEffectiveYears(DYNAMIC_TIME_ZONE_INFORMATION&* arg, uint32_t&* arg, uint32_t&* arg)
		{
			return (return (::System::UInt32(*)(DYNAMIC_TIME_ZONE_INFORMATION&*, uint32_t&*, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETDYNAMICTIMEZONEINFORMATIONEFFECTIVEYEARS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean GetTimeZoneInformationForYear(::System::UInt16 arg, DYNAMIC_TIME_ZONE_INFORMATION&* arg, TIME_ZONE_INFORMATION&* arg)
		{
			return (return (::System::Boolean(*)(::System::UInt16, DYNAMIC_TIME_ZONE_INFORMATION&*, TIME_ZONE_INFORMATION&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETTIMEZONEINFORMATIONFORYEAR_OFFSET))(arg, arg, arg, nullptr);
		}

		AdjustmentRule* CreateAdjustmentRuleFromTimeZoneInformation(DYNAMIC_TIME_ZONE_INFORMATION&* arg, ::System::DateTime* arg, ::System::DateTime* arg, ::System::Int32 arg)
		{
			return (return (AdjustmentRule*(*)(DYNAMIC_TIME_ZONE_INFORMATION&*, ::System::DateTime*, ::System::DateTime*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_CREATEADJUSTMENTRULEFROMTIMEZONEINFORMATION_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TransitionTimeFromTimeZoneInformation(DYNAMIC_TIME_ZONE_INFORMATION* arg, TransitionTime&* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(DYNAMIC_TIME_ZONE_INFORMATION*, TransitionTime&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRANSITIONTIMEFROMTIMEZONEINFORMATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::TimeZoneInfo* TryCreateTimeZone(DYNAMIC_TIME_ZONE_INFORMATION* arg)
		{
			return (return (::System::TimeZoneInfo*(*)(DYNAMIC_TIME_ZONE_INFORMATION*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRYCREATETIMEZONE_OFFSET))(arg, nullptr);
		}

		::System::TimeZoneInfo* GetLocalTimeZoneInfoWinRTFallback()
		{
			return (return (::System::TimeZoneInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETLOCALTIMEZONEINFOWINRTFALLBACK_OFFSET))(nullptr);
		}

		::System::TimeZoneInfo* FindSystemTimeZoneByIdWinRTFallback(::System::String* str)
		{
			return (return (::System::TimeZoneInfo*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_FINDSYSTEMTIMEZONEBYIDWINRTFALLBACK_OFFSET))(str, nullptr);
		}

		::System::Void GetSystemTimeZonesWinRTFallback(CachedData* arg)
		{
			((::System::Void(*)(CachedData*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETSYSTEMTIMEZONESWINRTFALLBACK_OFFSET))(arg, nullptr);
		}

		::System::String* get_Id()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GET_ID_OFFSET))(nullptr);
		}

		::System::String* get_DisplayName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GET_DISPLAYNAME_OFFSET))(nullptr);
		}

		::System::String* get_StandardName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GET_STANDARDNAME_OFFSET))(nullptr);
		}

		::System::String* get_DaylightName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GET_DAYLIGHTNAME_OFFSET))(nullptr);
		}

		::System::TimeSpan* get_BaseUtcOffset()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GET_BASEUTCOFFSET_OFFSET))(nullptr);
		}

		::System::Boolean get_SupportsDaylightSavingTime()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GET_SUPPORTSDAYLIGHTSAVINGTIME_OFFSET))(nullptr);
		}

		AdjustmentRule* GetPreviousAdjustmentRule(AdjustmentRule* arg, Il2CppObject* arg)
		{
			return (return (AdjustmentRule*(*)(AdjustmentRule*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETPREVIOUSADJUSTMENTRULE_OFFSET))(arg, arg, nullptr);
		}

		::System::TimeSpan* GetUtcOffset(::System::DateTime* arg)
		{
			return (return (::System::TimeSpan*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETUTCOFFSET_OFFSET))(arg, nullptr);
		}

		::System::TimeSpan* GetLocalUtcOffset(::System::DateTime* arg, ::System::TimeZoneInfoOptions* arg)
		{
			return (return (::System::TimeSpan*(*)(::System::DateTime*, ::System::TimeZoneInfoOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETLOCALUTCOFFSET_OFFSET))(arg, arg, nullptr);
		}

		::System::TimeSpan* GetUtcOffset(::System::DateTime* arg, ::System::TimeZoneInfoOptions* arg)
		{
			return (return (::System::TimeSpan*(*)(::System::DateTime*, ::System::TimeZoneInfoOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETUTCOFFSET_OFFSET))(arg, arg, nullptr);
		}

		::System::TimeSpan* GetUtcOffset(::System::DateTime* arg, ::System::TimeZoneInfoOptions* arg, CachedData* arg)
		{
			return (return (::System::TimeSpan*(*)(::System::DateTime*, ::System::TimeZoneInfoOptions*, CachedData*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETUTCOFFSET_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::DateTime* ConvertTime(::System::DateTime* arg, ::System::TimeZoneInfo* arg, ::System::TimeZoneInfo* arg, ::System::TimeZoneInfoOptions* arg)
		{
			return (return (::System::DateTime*(*)(::System::DateTime*, ::System::TimeZoneInfo*, ::System::TimeZoneInfo*, ::System::TimeZoneInfoOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_CONVERTTIME_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::DateTime* ConvertTime(::System::DateTime* arg, ::System::TimeZoneInfo* arg, ::System::TimeZoneInfo* arg, ::System::TimeZoneInfoOptions* arg, CachedData* arg)
		{
			return (return (::System::DateTime*(*)(::System::DateTime*, ::System::TimeZoneInfo*, ::System::TimeZoneInfo*, ::System::TimeZoneInfoOptions*, CachedData*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_CONVERTTIME_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::DateTime* ConvertTimeToUtc(::System::DateTime* arg, ::System::TimeZoneInfoOptions* arg)
		{
			return (return (::System::DateTime*(*)(::System::DateTime*, ::System::TimeZoneInfoOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_CONVERTTIMETOUTC_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::TimeZoneInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::TimeZoneInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::TimeZoneInfo* FromSerializedString(::System::String* str)
		{
			return (return (::System::TimeZoneInfo*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_FROMSERIALIZEDSTRING_OFFSET))(str, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETHASHCODE_OFFSET))(nullptr);
		}

		Il2CppObject* GetSystemTimeZones()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETSYSTEMTIMEZONES_OFFSET))(nullptr);
		}

		::System::Boolean HasSameRules(::System::TimeZoneInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::TimeZoneInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_HASSAMERULES_OFFSET))(arg, nullptr);
		}

		::System::TimeZoneInfo* get_Local()
		{
			return (return (::System::TimeZoneInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GET_LOCAL_OFFSET))(nullptr);
		}

		::System::String* ToSerializedString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TOSERIALIZEDSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TOSTRING_OFFSET))(nullptr);
		}

		::System::TimeZoneInfo* get_Utc()
		{
			return (return (::System::TimeZoneInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GET_UTC_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::TimeSpan* arg, ::System::String* str, ::System::String* str, ::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::TimeSpan*, ::System::String*, ::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_.CTOR_OFFSET))(str, arg, str, str, str, arg, arg, nullptr);
		}

		::System::TimeZoneInfo* CreateCustomTimeZone(::System::String* str, ::System::TimeSpan* arg, ::System::String* str, ::System::String* str)
		{
			return (return (::System::TimeZoneInfo*(*)(::System::String*, ::System::TimeSpan*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_CREATECUSTOMTIMEZONE_OFFSET))(str, arg, str, str, nullptr);
		}

		::System::Void System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_SYSTEM.RUNTIME.SERIALIZATION.IDESERIALIZATIONCALLBACK.ONDESERIALIZATION_OFFSET))(arg, nullptr);
		}

		::System::Void System.Runtime.Serialization.ISerializable.GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		AdjustmentRule* GetAdjustmentRuleForTime(::System::DateTime* arg, Il2CppObject&* arg)
		{
			return (return (AdjustmentRule*(*)(::System::DateTime*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETADJUSTMENTRULEFORTIME_OFFSET))(arg, arg, nullptr);
		}

		AdjustmentRule* GetAdjustmentRuleForTime(::System::DateTime* arg, ::System::Boolean arg, Il2CppObject&* arg)
		{
			return (return (AdjustmentRule*(*)(::System::DateTime*, ::System::Boolean, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETADJUSTMENTRULEFORTIME_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 CompareAdjustmentRuleToDateTime(AdjustmentRule* arg, AdjustmentRule* arg, ::System::DateTime* arg, ::System::DateTime* arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(AdjustmentRule*, AdjustmentRule*, ::System::DateTime*, ::System::DateTime*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_COMPAREADJUSTMENTRULETODATETIME_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::DateTime* ConvertToUtc(::System::DateTime* arg, ::System::TimeSpan* arg, ::System::TimeSpan* arg)
		{
			return (return (::System::DateTime*(*)(::System::DateTime*, ::System::TimeSpan*, ::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_CONVERTTOUTC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::DateTime* ConvertFromUtc(::System::DateTime* arg, ::System::TimeSpan* arg, ::System::TimeSpan* arg)
		{
			return (return (::System::DateTime*(*)(::System::DateTime*, ::System::TimeSpan*, ::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_CONVERTFROMUTC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::DateTime* ConvertToFromUtc(::System::DateTime* arg, ::System::TimeSpan* arg, ::System::TimeSpan* arg, ::System::Boolean arg)
		{
			return (return (::System::DateTime*(*)(::System::DateTime*, ::System::TimeSpan*, ::System::TimeSpan*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_CONVERTTOFROMUTC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::DateTime* ConvertUtcToTimeZone(::System::Int64 arg, ::System::TimeZoneInfo* arg, bool&* arg)
		{
			return (return (::System::DateTime*(*)(::System::Int64, ::System::TimeZoneInfo*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_CONVERTUTCTOTIMEZONE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Globalization::DaylightTimeStruct* GetDaylightTime(::System::Int32 arg, AdjustmentRule* arg, Il2CppObject* arg)
		{
			return (return (::System::Globalization::DaylightTimeStruct*(*)(::System::Int32, AdjustmentRule*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETDAYLIGHTTIME_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean GetIsDaylightSavings(::System::DateTime* arg, AdjustmentRule* arg, ::System::Globalization::DaylightTimeStruct* arg, ::System::TimeZoneInfoOptions* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, AdjustmentRule*, ::System::Globalization::DaylightTimeStruct*, ::System::TimeZoneInfoOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETISDAYLIGHTSAVINGS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::TimeSpan* GetDaylightSavingsStartOffsetFromUtc(::System::TimeSpan* arg, AdjustmentRule* arg, Il2CppObject* arg)
		{
			return (return (::System::TimeSpan*(*)(::System::TimeSpan*, AdjustmentRule*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETDAYLIGHTSAVINGSSTARTOFFSETFROMUTC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::TimeSpan* GetDaylightSavingsEndOffsetFromUtc(::System::TimeSpan* arg, AdjustmentRule* arg)
		{
			return (return (::System::TimeSpan*(*)(::System::TimeSpan*, AdjustmentRule*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETDAYLIGHTSAVINGSENDOFFSETFROMUTC_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean GetIsDaylightSavingsFromUtc(::System::DateTime* arg, ::System::Int32 arg, ::System::TimeSpan* arg, AdjustmentRule* arg, Il2CppObject* arg, bool&* arg, ::System::TimeZoneInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::System::Int32, ::System::TimeSpan*, AdjustmentRule*, Il2CppObject*, bool&*, ::System::TimeZoneInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETISDAYLIGHTSAVINGSFROMUTC_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean CheckIsDst(::System::DateTime* arg, ::System::DateTime* arg, ::System::DateTime* arg, ::System::Boolean arg, AdjustmentRule* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::System::DateTime*, ::System::DateTime*, ::System::Boolean, AdjustmentRule*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_CHECKISDST_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean GetIsAmbiguousTime(::System::DateTime* arg, AdjustmentRule* arg, ::System::Globalization::DaylightTimeStruct* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, AdjustmentRule*, ::System::Globalization::DaylightTimeStruct*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETISAMBIGUOUSTIME_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean GetIsInvalidTime(::System::DateTime* arg, AdjustmentRule* arg, ::System::Globalization::DaylightTimeStruct* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, AdjustmentRule*, ::System::Globalization::DaylightTimeStruct*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETISINVALIDTIME_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::TimeSpan* GetUtcOffset(::System::DateTime* arg, ::System::TimeZoneInfo* arg, ::System::TimeZoneInfoOptions* arg)
		{
			return (return (::System::TimeSpan*(*)(::System::DateTime*, ::System::TimeZoneInfo*, ::System::TimeZoneInfoOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETUTCOFFSET_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::TimeSpan* GetUtcOffsetFromUtc(::System::DateTime* arg, ::System::TimeZoneInfo* arg)
		{
			return (return (::System::TimeSpan*(*)(::System::DateTime*, ::System::TimeZoneInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETUTCOFFSETFROMUTC_OFFSET))(arg, arg, nullptr);
		}

		::System::TimeSpan* GetUtcOffsetFromUtc(::System::DateTime* arg, ::System::TimeZoneInfo* arg, bool&* arg)
		{
			return (return (::System::TimeSpan*(*)(::System::DateTime*, ::System::TimeZoneInfo*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETUTCOFFSETFROMUTC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::TimeSpan* GetUtcOffsetFromUtc(::System::DateTime* arg, ::System::TimeZoneInfo* arg, bool&* arg, bool&* arg)
		{
			return (return (::System::TimeSpan*(*)(::System::DateTime*, ::System::TimeZoneInfo*, bool&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETUTCOFFSETFROMUTC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::DateTime* TransitionTimeToDateTime(::System::Int32 arg, TransitionTime* arg)
		{
			return (return (::System::DateTime*(*)(::System::Int32, TransitionTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRANSITIONTIMETODATETIME_OFFSET))(arg, arg, nullptr);
		}

		TimeZoneInfoResult* TryGetTimeZone(::System::String* str, ::System::Boolean arg, ::System::TimeZoneInfo&* arg, ::System::Exception&* arg, CachedData* arg, ::System::Boolean arg)
		{
			return (return (TimeZoneInfoResult*(*)(::System::String*, ::System::Boolean, ::System::TimeZoneInfo&*, ::System::Exception&*, CachedData*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRYGETTIMEZONE_OFFSET))(str, arg, arg, arg, arg, arg, nullptr);
		}

		TimeZoneInfoResult* TryGetTimeZoneFromLocalMachine(::System::String* str, ::System::Boolean arg, ::System::TimeZoneInfo&* arg, ::System::Exception&* arg, CachedData* arg)
		{
			return (return (TimeZoneInfoResult*(*)(::System::String*, ::System::Boolean, ::System::TimeZoneInfo&*, ::System::Exception&*, CachedData*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRYGETTIMEZONEFROMLOCALMACHINE_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::Void ValidateTimeZoneInfo(::System::String* str, ::System::TimeSpan* arg, ::Il2CppArray<::System::Object*>* arg, bool&* arg)
		{
			((::System::Void(*)(::System::String*, ::System::TimeSpan*, ::Il2CppArray<::System::Object*>*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_VALIDATETIMEZONEINFO_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Boolean UtcOffsetOutOfRange(::System::TimeSpan* arg)
		{
			return (return (::System::Boolean(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_UTCOFFSETOUTOFRANGE_OFFSET))(arg, nullptr);
		}

		::System::TimeSpan* GetUtcOffset(::System::TimeSpan* arg, AdjustmentRule* arg)
		{
			return (return (::System::TimeSpan*(*)(::System::TimeSpan*, AdjustmentRule*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_GETUTCOFFSET_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsValidAdjustmentRuleOffest(::System::TimeSpan* arg, AdjustmentRule* arg)
		{
			return (return (::System::Boolean(*)(::System::TimeSpan*, AdjustmentRule*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_ISVALIDADJUSTMENTRULEOFFEST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

