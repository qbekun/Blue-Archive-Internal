#pragma once
#include "../unitysdk.h"

#define MXBEHAVIORTREE_UTILITY_GETNODENAME_OFFSET UNITYSDK_OFFSET(0x94357D0)
#define MXBEHAVIORTREE_UTILITY_INVERSE_OFFSET UNITYSDK_OFFSET(0x94358D0)
#define MXBEHAVIORTREE_UTILITY_GETNODEFULLNAME_OFFSET UNITYSDK_OFFSET(0x94358F0)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int Utility_TypeDefinitionIndex = 36836;

	class Utility : public Il2CppObject
	{
	public:
		::System::String* GetNodeName(::System::Type* arg)
		{
			return (return (::System::String*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_UTILITY_GETNODENAME_OFFSET))(arg, nullptr);
		}

		State* Inverse(State* arg)
		{
			return (return (State*(*)(State*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_UTILITY_INVERSE_OFFSET))(arg, nullptr);
		}

		::System::String* GetNodeFullName(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_UTILITY_GETNODEFULLNAME_OFFSET))(arg, arg, nullptr);
		}

	};
}

