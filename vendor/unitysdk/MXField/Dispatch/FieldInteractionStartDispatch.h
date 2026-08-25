#pragma once
#include "../../unitysdk.h"

namespace MXField::Shared::Data { class FieldInteractionInfo; }

#define MXFIELD_DISPATCH_FIELDINTERACTIONSTARTDISPATCH_.CTOR_OFFSET UNITYSDK_OFFSET(0xEB6CF0)
#define MXFIELD_DISPATCH_FIELDINTERACTIONSTARTDISPATCH_GET_INPUTBLOCKPREDICATE_OFFSET UNITYSDK_OFFSET(0xEC8650)
#define MXFIELD_DISPATCH_FIELDINTERACTIONSTARTDISPATCH_GET_INTERACTIONINFO_OFFSET UNITYSDK_OFFSET(0xEC8680)
#define MXFIELD_DISPATCH_FIELDINTERACTIONSTARTDISPATCH_GET_BLOCK_OFFSET UNITYSDK_OFFSET(0xEC8690)

namespace MXField::Dispatch
{
	inline static constexpr unsigned int FieldInteractionStartDispatch_TypeDefinitionIndex = 10894;

	class FieldInteractionStartDispatch : public Il2CppObject
	{
	public:
		::MXField::Shared::Data::FieldInteractionInfo* _InteractionInfo_k__BackingField; // 0x18

		::System::Void .ctor(::MXField::Shared::Data::FieldInteractionInfo* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldInteractionInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_FIELDINTERACTIONSTARTDISPATCH_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_InputBlockPredicate()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_FIELDINTERACTIONSTARTDISPATCH_GET_INPUTBLOCKPREDICATE_OFFSET))(nullptr);
		}

		::MXField::Shared::Data::FieldInteractionInfo* get_InteractionInfo()
		{
			return ((::MXField::Shared::Data::FieldInteractionInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_FIELDINTERACTIONSTARTDISPATCH_GET_INTERACTIONINFO_OFFSET))(nullptr);
		}

		::System::Boolean get_Block()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_FIELDINTERACTIONSTARTDISPATCH_GET_BLOCK_OFFSET))(nullptr);
		}

	};
}

