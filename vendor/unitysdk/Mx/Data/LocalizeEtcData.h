#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class LocalizeEtcExcel&; }
namespace FlatData { class ParcelType; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::Data::Excel { class LocalizeSkillExcel&; }

#define MX_DATA_LOCALIZEETCDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x18EC460)
#define MX_DATA_LOCALIZEETCDATA_TRYGETETCEXCEL_OFFSET UNITYSDK_OFFSET(0x18EC4A0)
#define MX_DATA_LOCALIZEETCDATA_GETETCHASH_OFFSET UNITYSDK_OFFSET(0x18EC550)
#define MX_DATA_LOCALIZEETCDATA_GETNAME_OFFSET UNITYSDK_OFFSET(0x18ECDB0)
#define MX_DATA_LOCALIZEETCDATA_NOLOCALIZEDATASTRING_OFFSET UNITYSDK_OFFSET(0x18ECEE0)
#define MX_DATA_LOCALIZEETCDATA_INITIALIZECLIENT_OFFSET UNITYSDK_OFFSET(0x18ECF20)
#define MX_DATA_LOCALIZEETCDATA_GETNAME_OFFSET UNITYSDK_OFFSET(0x18ECF60)
#define MX_DATA_LOCALIZEETCDATA_GETNAME_OFFSET UNITYSDK_OFFSET(0x18ECFD0)
#define MX_DATA_LOCALIZEETCDATA_GETCHARACTERNAMEKR_OFFSET UNITYSDK_OFFSET(0x18ED090)
#define MX_DATA_LOCALIZEETCDATA_GETDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x18ED100)
#define MX_DATA_LOCALIZEETCDATA_GETDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x18ED1C0)
#define MX_DATA_LOCALIZEETCDATA_HASDATA_OFFSET UNITYSDK_OFFSET(0x18ED2F0)
#define MX_DATA_LOCALIZEETCDATA_TRYGETSKILLEXCEL_OFFSET UNITYSDK_OFFSET(0x18ED310)
#define MX_DATA_LOCALIZEETCDATA_GETSKILLNAME_OFFSET UNITYSDK_OFFSET(0x18ED430)
#define MX_DATA_LOCALIZEETCDATA_GETSKILLDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x18ED560)
#define MX_DATA_LOCALIZEETCDATA_GETSKILLINVOKELOCALIZE_OFFSET UNITYSDK_OFFSET(0x18ED690)
#define MX_DATA_LOCALIZEETCDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18ED7C0)

namespace MX::Data
{
	inline static constexpr unsigned int LocalizeEtcData_TypeDefinitionIndex = 16172;

	class LocalizeEtcData : public Il2CppObject
	{
	public:
		Il2CppObject* cacheSkill; // 0x28

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOCALIZEETCDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Boolean TryGetEtcExcel(::System::UInt32 arg, ::MX::Data::Excel::LocalizeEtcExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::MX::Data::Excel::LocalizeEtcExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOCALIZEETCDATA_TRYGETETCEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 GetEtcHash(::FlatData::ParcelType* arg, ::System::Int64 arg)
		{
			return (return (::System::UInt32(*)(::FlatData::ParcelType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOCALIZEETCDATA_GETETCHASH_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetName(::System::UInt32 arg)
		{
			return (return (::System::String*(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOCALIZEETCDATA_GETNAME_OFFSET))(arg, nullptr);
		}

		::System::String* NoLocalizeDataString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOCALIZEETCDATA_NOLOCALIZEDATASTRING_OFFSET))(nullptr);
		}

		::System::Void InitializeClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOCALIZEETCDATA_INITIALIZECLIENT_OFFSET))(nullptr);
		}

		::System::String* GetName(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			return (return (::System::String*(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOCALIZEETCDATA_GETNAME_OFFSET))(arg, nullptr);
		}

		::System::String* GetName(::FlatData::ParcelType* arg, ::System::Int64 arg)
		{
			return (return (::System::String*(*)(::FlatData::ParcelType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOCALIZEETCDATA_GETNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetCharacterNameKr(::System::UInt32 arg)
		{
			return (return (::System::String*(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOCALIZEETCDATA_GETCHARACTERNAMEKR_OFFSET))(arg, nullptr);
		}

		::System::String* GetDescription(::FlatData::ParcelType* arg, ::System::Int64 arg)
		{
			return (return (::System::String*(*)(::FlatData::ParcelType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOCALIZEETCDATA_GETDESCRIPTION_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetDescription(::System::UInt32 arg)
		{
			return (return (::System::String*(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOCALIZEETCDATA_GETDESCRIPTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasData(::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOCALIZEETCDATA_HASDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetSkillExcel(::System::UInt32 arg, ::MX::Data::Excel::LocalizeSkillExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::MX::Data::Excel::LocalizeSkillExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOCALIZEETCDATA_TRYGETSKILLEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetSkillName(::System::UInt32 arg)
		{
			return (return (::System::String*(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOCALIZEETCDATA_GETSKILLNAME_OFFSET))(arg, nullptr);
		}

		::System::String* GetSkillDescription(::System::UInt32 arg)
		{
			return (return (::System::String*(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOCALIZEETCDATA_GETSKILLDESCRIPTION_OFFSET))(arg, nullptr);
		}

		::System::String* GetSkillInvokeLocalize(::System::UInt32 arg)
		{
			return (return (::System::String*(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOCALIZEETCDATA_GETSKILLINVOKELOCALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOCALIZEETCDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

