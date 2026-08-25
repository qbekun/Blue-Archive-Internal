#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALDBSCHEMA_GET_STRINGID_OFFSET UNITYSDK_OFFSET(0x1B86C90)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B86CA0)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALDBSCHEMA_SET_STRINGID_OFFSET UNITYSDK_OFFSET(0x1B86CB0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int LogicEffectCommonVisualDBSchema_TypeDefinitionIndex = 18410;

	class LogicEffectCommonVisualDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::UInt32 _StringID_k__BackingField; // 0x20

		::System::UInt32 get_StringID()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALDBSCHEMA_GET_STRINGID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_StringID(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALDBSCHEMA_SET_STRINGID_OFFSET))(arg, nullptr);
		}

	};
}

