#pragma once
#include "unitysdk.h"

#define ASSISTPENDINGSLOTINFO_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x24F27B0)
#define ASSISTPENDINGSLOTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x24F26C0)
#define ASSISTPENDINGSLOTINFO_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x24F27C0)
#define ASSISTPENDINGSLOTINFO_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x24F27D0)
#define ASSISTPENDINGSLOTINFO_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x24F27E0)

	inline static constexpr unsigned int AssistPendingSlotInfo_TypeDefinitionIndex = 6021;

	class AssistPendingSlotInfo : public Il2CppObject
	{
	public:
		::System::Int32 _Type_k__BackingField; // 0x10
		::System::Int32 _Index_k__BackingField; // 0x14

		::System::Void set_Index(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ASSISTPENDINGSLOTINFO_SET_INDEX_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSISTPENDINGSLOTINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_Type()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSISTPENDINGSLOTINFO_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_Type(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ASSISTPENDINGSLOTINFO_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSISTPENDINGSLOTINFO_GET_INDEX_OFFSET))(nullptr);
		}

	};

