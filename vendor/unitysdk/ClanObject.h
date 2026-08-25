#pragma once
#include "unitysdk.h"

namespace FlatData { class ClanJoinOption; }
namespace MX::GameLogic::DBModel { class ClanDB; }

#define CLANOBJECT_SET_CLANPRESIDENTNICKNAME_OFFSET UNITYSDK_OFFSET(0x1AD41F0)
#define CLANOBJECT_SET_CLANMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1AD4200)
#define CLANOBJECT_SET_CLANPRESIDENTREPRESENTCHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1AD4210)
#define CLANOBJECT_GET_CLANMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1AD4220)
#define CLANOBJECT_GET_CLANPRESIDENTNICKNAME_OFFSET UNITYSDK_OFFSET(0x1AD4230)
#define CLANOBJECT_SET_CLANNAME_OFFSET UNITYSDK_OFFSET(0x1AD4240)
#define CLANOBJECT_SET_CLANDBID_OFFSET UNITYSDK_OFFSET(0x1AD4250)
#define CLANOBJECT_GET_CLANNOTICE_OFFSET UNITYSDK_OFFSET(0x1AD4260)
#define CLANOBJECT_GET_CLANNAME_OFFSET UNITYSDK_OFFSET(0x1AD4270)
#define CLANOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AD4280)
#define CLANOBJECT_SET_CLANJOINOPTION_OFFSET UNITYSDK_OFFSET(0x1AD4300)
#define CLANOBJECT_SET_CLANNOTICE_OFFSET UNITYSDK_OFFSET(0x1AD4310)
#define CLANOBJECT_GET_CLANJOINOPTION_OFFSET UNITYSDK_OFFSET(0x1AD4320)
#define CLANOBJECT_GET_CLANPRESIDENTREPRESENTCHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1AD4330)
#define CLANOBJECT_GET_CLANDBID_OFFSET UNITYSDK_OFFSET(0x1AD4340)
#define CLANOBJECT_GET_CLANPRESIDENTREPRESENTCHARACTERCOSTUMEID_OFFSET UNITYSDK_OFFSET(0x1AD4350)
#define CLANOBJECT_SET_CLANPRESIDENTREPRESENTCHARACTERCOSTUMEID_OFFSET UNITYSDK_OFFSET(0x1AD4360)

	inline static constexpr unsigned int ClanObject_TypeDefinitionIndex = 1430;

	class ClanObject : public Il2CppObject
	{
	public:
		::System::Int64 _ClanDBId_k__BackingField; // 0x10
		::System::Int64 _ClanMemberCount_k__BackingField; // 0x18
		::FlatData::ClanJoinOption* _ClanJoinOption_k__BackingField; // 0x20
		::System::String* _ClanName_k__BackingField; // 0x28
		::System::String* _ClanNotice_k__BackingField; // 0x30
		::System::String* _ClanPresidentNickName_k__BackingField; // 0x38
		::System::Int64 _ClanPresidentRepresentCharacterUniqueId_k__BackingField; // 0x40
		::System::Int64 _ClanPresidentRepresentCharacterCostumeId_k__BackingField; // 0x48

		::System::Void set_ClanPresidentNickName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CLANOBJECT_SET_CLANPRESIDENTNICKNAME_OFFSET))(str, nullptr);
		}

		::System::Void set_ClanMemberCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLANOBJECT_SET_CLANMEMBERCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_ClanPresidentRepresentCharacterUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLANOBJECT_SET_CLANPRESIDENTREPRESENTCHARACTERUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ClanMemberCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANOBJECT_GET_CLANMEMBERCOUNT_OFFSET))(nullptr);
		}

		::System::String* get_ClanPresidentNickName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANOBJECT_GET_CLANPRESIDENTNICKNAME_OFFSET))(nullptr);
		}

		::System::Void set_ClanName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CLANOBJECT_SET_CLANNAME_OFFSET))(str, nullptr);
		}

		::System::Void set_ClanDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLANOBJECT_SET_CLANDBID_OFFSET))(arg, nullptr);
		}

		::System::String* get_ClanNotice()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANOBJECT_GET_CLANNOTICE_OFFSET))(nullptr);
		}

		::System::String* get_ClanName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANOBJECT_GET_CLANNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::DBModel::ClanDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanDB*, ::PVOID))((::PBYTE)hIl2Cpp + CLANOBJECT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_ClanJoinOption(::FlatData::ClanJoinOption* arg)
		{
			((::System::Void(*)(::FlatData::ClanJoinOption*, ::PVOID))((::PBYTE)hIl2Cpp + CLANOBJECT_SET_CLANJOINOPTION_OFFSET))(arg, nullptr);
		}

		::System::Void set_ClanNotice(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CLANOBJECT_SET_CLANNOTICE_OFFSET))(str, nullptr);
		}

		::FlatData::ClanJoinOption* get_ClanJoinOption()
		{
			return ((::FlatData::ClanJoinOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANOBJECT_GET_CLANJOINOPTION_OFFSET))(nullptr);
		}

		::System::Int64 get_ClanPresidentRepresentCharacterUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANOBJECT_GET_CLANPRESIDENTREPRESENTCHARACTERUNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_ClanDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANOBJECT_GET_CLANDBID_OFFSET))(nullptr);
		}

		::System::Int64 get_ClanPresidentRepresentCharacterCostumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANOBJECT_GET_CLANPRESIDENTREPRESENTCHARACTERCOSTUMEID_OFFSET))(nullptr);
		}

		::System::Void set_ClanPresidentRepresentCharacterCostumeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLANOBJECT_SET_CLANPRESIDENTREPRESENTCHARACTERCOSTUMEID_OFFSET))(arg, nullptr);
		}

	};

