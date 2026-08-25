#pragma once
#include "../unitysdk.h"

#define MXBEHAVIORTREE_ICONSTANTPROPERTY_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x9430940)
#define MXBEHAVIORTREE_ICONSTANTPROPERTY_GET_VALUESTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXBEHAVIORTREE_ICONSTANTPROPERTY_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9430B40)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int IConstantProperty_TypeDefinitionIndex = 36820;

	class IConstantProperty : public Il2CppObject
	{
	public:
		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_ICONSTANTPROPERTY_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::String* get_valueString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_ICONSTANTPROPERTY_GET_VALUESTRING_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_ICONSTANTPROPERTY_.CCTOR_OFFSET))(nullptr);
		}

	};
}

