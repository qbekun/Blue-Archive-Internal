#pragma once
#include "../../unitysdk.h"

namespace MXField::Shared::Model { class FieldInteractionDB; }
namespace MXField::Shared::Data { class FieldInteractionInfo; }

#define MXFIELD_DISPATCH_FIELDINTERACTIONFINISHDISPATCH_GET_INTERACTIONDB_OFFSET UNITYSDK_OFFSET(0xEC86A0)
#define MXFIELD_DISPATCH_FIELDINTERACTIONFINISHDISPATCH_GET_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0xEC86B0)
#define MXFIELD_DISPATCH_FIELDINTERACTIONFINISHDISPATCH_.CTOR_OFFSET UNITYSDK_OFFSET(0xEC86C0)
#define MXFIELD_DISPATCH_FIELDINTERACTIONFINISHDISPATCH_.CTOR_OFFSET UNITYSDK_OFFSET(0xEC87B0)
#define MXFIELD_DISPATCH_FIELDINTERACTIONFINISHDISPATCH_GET_INPUTBLOCKPREDICATE_OFFSET UNITYSDK_OFFSET(0xEC8800)
#define MXFIELD_DISPATCH_FIELDINTERACTIONFINISHDISPATCH_GET_BLOCK_OFFSET UNITYSDK_OFFSET(0xEC8830)

namespace MXField::Dispatch
{
	inline static constexpr unsigned int FieldInteractionFinishDispatch_TypeDefinitionIndex = 10895;

	class FieldInteractionFinishDispatch : public Il2CppObject
	{
	public:
		::MXField::Shared::Model::FieldInteractionDB* _InteractionDB_k__BackingField; // 0x18
		::System::Boolean _IsSuccess_k__BackingField; // 0x20

		::MXField::Shared::Model::FieldInteractionDB* get_InteractionDB()
		{
			return ((::MXField::Shared::Model::FieldInteractionDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_FIELDINTERACTIONFINISHDISPATCH_GET_INTERACTIONDB_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSuccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_FIELDINTERACTIONFINISHDISPATCH_GET_ISSUCCESS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MXField::Shared::Data::FieldInteractionInfo* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldInteractionInfo*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_FIELDINTERACTIONFINISHDISPATCH_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::MXField::Shared::Model::FieldInteractionDB* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MXField::Shared::Model::FieldInteractionDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_FIELDINTERACTIONFINISHDISPATCH_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* get_InputBlockPredicate()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_FIELDINTERACTIONFINISHDISPATCH_GET_INPUTBLOCKPREDICATE_OFFSET))(nullptr);
		}

		::System::Boolean get_Block()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_FIELDINTERACTIONFINISHDISPATCH_GET_BLOCK_OFFSET))(nullptr);
		}

	};
}

