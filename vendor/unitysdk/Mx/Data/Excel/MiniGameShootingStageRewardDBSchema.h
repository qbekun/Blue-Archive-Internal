#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDDBSCHEMA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1BFF0B0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDDBSCHEMA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1BFF0C0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BFF0D0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameShootingStageRewardDBSchema_TypeDefinitionIndex = 18853;

	class MiniGameShootingStageRewardDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _GroupId_k__BackingField; // 0x20

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDDBSCHEMA_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Void set_GroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDDBSCHEMA_SET_GROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEREWARDDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

