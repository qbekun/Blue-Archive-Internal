#pragma once
#include "../unitysdk.h"

#define MXBEHAVIORTREE_INITIALIZER_REGISTERDYNAMICUNIONFORMATTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXBEHAVIORTREE_INITIALIZER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9406990)
#define MXBEHAVIORTREE_INITIALIZER_RUNTIMEINITIALIZEONLOADMETHOD_OFFSET UNITYSDK_OFFSET(0x94069A0)
#define MXBEHAVIORTREE_INITIALIZER_GETUNIONTAG_OFFSET UNITYSDK_OFFSET(0x9406B50)
#define MXBEHAVIORTREE_INITIALIZER_INITIALIZEONLOAD_OFFSET UNITYSDK_OFFSET(0x94069B0)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int Initializer_TypeDefinitionIndex = 36748;

	class Initializer : public Il2CppObject
	{
	public:
		::System::Void RegisterDynamicUnionFormatter(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_INITIALIZER_REGISTERDYNAMICUNIONFORMATTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_INITIALIZER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RuntimeInitializeOnLoadMethod()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_INITIALIZER_RUNTIMEINITIALIZEONLOADMETHOD_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetUnionTag(::Il2CppArray<::System::Object*>* arg, Il2CppObject* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_INITIALIZER_GETUNIONTAG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InitializeOnLoad()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_INITIALIZER_INITIALIZEONLOAD_OFFSET))(nullptr);
		}

	};
}

