#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class ITBGItemInfo; }

#define MX_TABLEBOARD_TBGSTACKBUFF_SET_STACK_OFFSET UNITYSDK_OFFSET(0xF0A5C0)
#define MX_TABLEBOARD_TBGSTACKBUFF_.CTOR_OFFSET UNITYSDK_OFFSET(0xF0A5D0)
#define MX_TABLEBOARD_TBGSTACKBUFF_GET_STACK_OFFSET UNITYSDK_OFFSET(0xF0A690)
#define MX_TABLEBOARD_TBGSTACKBUFF_GET_ITEMINFO_OFFSET UNITYSDK_OFFSET(0xF0A6A0)
#define MX_TABLEBOARD_TBGSTACKBUFF_ADDSTACK_OFFSET UNITYSDK_OFFSET(0xF0A6B0)
#define MX_TABLEBOARD_TBGSTACKBUFF_GET_REMAINENCOUNTERCOUNTER_OFFSET UNITYSDK_OFFSET(0xF0A760)

namespace MX::TableBoard
{
	inline static constexpr unsigned int TBGStackBuff_TypeDefinitionIndex = 11211;

	class TBGStackBuff : public Il2CppObject
	{
	public:
		::MX::Data::ITBGItemInfo* _ItemInfo_k__BackingField; // 0x10
		::System::Int32 _Stack_k__BackingField; // 0x18

		::System::Void set_Stack(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGSTACKBUFF_SET_STACK_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::ITBGItemInfo* arg)
		{
			((::System::Void(*)(::MX::Data::ITBGItemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGSTACKBUFF_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Stack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGSTACKBUFF_GET_STACK_OFFSET))(nullptr);
		}

		::MX::Data::ITBGItemInfo* get_ItemInfo()
		{
			return ((::MX::Data::ITBGItemInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGSTACKBUFF_GET_ITEMINFO_OFFSET))(nullptr);
		}

		::System::Void AddStack(::MX::Data::ITBGItemInfo* arg)
		{
			((::System::Void(*)(::MX::Data::ITBGItemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGSTACKBUFF_ADDSTACK_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RemainEncounterCounter()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGSTACKBUFF_GET_REMAINENCOUNTERCOUNTER_OFFSET))(nullptr);
		}

	};
}

