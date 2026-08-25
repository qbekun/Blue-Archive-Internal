#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMECCGPERKDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B9D810)
#define MX_DATA_EXCEL_MINIGAMECCGPERKDBSCHEMA_SET_CCGID_OFFSET UNITYSDK_OFFSET(0x1B9D820)
#define MX_DATA_EXCEL_MINIGAMECCGPERKDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1B9D830)
#define MX_DATA_EXCEL_MINIGAMECCGPERKDBSCHEMA_GET_CCGID_OFFSET UNITYSDK_OFFSET(0x1B9D840)
#define MX_DATA_EXCEL_MINIGAMECCGPERKDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B9D850)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameCCGPerkDBSchema_TypeDefinitionIndex = 18521;

	class MinigameCCGPerkDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20
		::System::Int64 _CCGId_k__BackingField; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CCGId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKDBSCHEMA_SET_CCGID_OFFSET))(arg, nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CCGId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKDBSCHEMA_GET_CCGID_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

	};
}

