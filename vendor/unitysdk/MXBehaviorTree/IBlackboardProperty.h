#pragma once
#include "../unitysdk.h"

#define MXBEHAVIORTREE_IBLACKBOARDPROPERTY_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x9427F90)
#define MXBEHAVIORTREE_IBLACKBOARDPROPERTY_SET_NAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXBEHAVIORTREE_IBLACKBOARDPROPERTY_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9428190)
#define MXBEHAVIORTREE_IBLACKBOARDPROPERTY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int IBlackboardProperty_TypeDefinitionIndex = 36803;

	class IBlackboardProperty : public Il2CppObject
	{
	public:
		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_IBLACKBOARDPROPERTY_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void set_name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_IBLACKBOARDPROPERTY_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_IBLACKBOARDPROPERTY_.CCTOR_OFFSET))(nullptr);
		}

		::System::String* get_name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_IBLACKBOARDPROPERTY_GET_NAME_OFFSET))(nullptr);
		}

	};
}

