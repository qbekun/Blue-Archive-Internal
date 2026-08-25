#pragma once
#include "../../unitysdk.h"

namespace FlatData { class EchelonExtensionType; }

#define MX_DATA_ISTAGEINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ISTAGEINFO_GET_GROUNDID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ISTAGEINFO_GET_BATTLEDURATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ISTAGEINFO_GET_ECHELONEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Data
{
	inline static constexpr unsigned int IStageInfo_TypeDefinitionIndex = 15848;

	class IStageInfo : public Il2CppObject
	{
	public:
		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ISTAGEINFO_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_GroundId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ISTAGEINFO_GET_GROUNDID_OFFSET))(nullptr);
		}

		::System::Int64 get_BattleDuration()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ISTAGEINFO_GET_BATTLEDURATION_OFFSET))(nullptr);
		}

		::FlatData::EchelonExtensionType* get_EchelonExtensionType()
		{
			return (return (::FlatData::EchelonExtensionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ISTAGEINFO_GET_ECHELONEXTENSIONTYPE_OFFSET))(nullptr);
		}

	};
}

