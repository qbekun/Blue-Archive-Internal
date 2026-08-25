#pragma once
#include "../../unitysdk.h"

#define MXFIELD_ACTIONS_OPENUIACTION`1_CREATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXFIELD_ACTIONS_OPENUIACTION`1_CREATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXFIELD_ACTIONS_OPENUIACTION`1_OPEN_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXFIELD_ACTIONS_OPENUIACTION`1_OPEN_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXFIELD_ACTIONS_OPENUIACTION`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXFIELD_ACTIONS_OPENUIACTION`1_COEXECUTE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXField::Actions
{
	inline static constexpr unsigned int OpenUIAction`1_TypeDefinitionIndex = 11091;

	class OpenUIAction`1 : public Il2CppObject
	{
	public:
		::System::String* uiName; // 0x0
		Il2CppObject* ui; // 0x0
		::System::Boolean waitUntilClose; // 0x0
		Il2CppObject* initAction; // 0x0
		Il2CppObject* coLoadingAction; // 0x0
		Il2CppObject* onOpenedAction; // 0x0

		Il2CppObject* Create(::System::Boolean arg, Il2CppObject* arg2, Il2CppObject* arg3, Il2CppObject* arg4)
		{
			return ((Il2CppObject*(*)(::System::Boolean, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_OPENUIACTION`1_CREATE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		Il2CppObject* Create(::System::String* str, ::System::Boolean arg, Il2CppObject* arg2, Il2CppObject* arg3, Il2CppObject* arg4)
		{
			return ((Il2CppObject*(*)(::System::String*, ::System::Boolean, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_OPENUIACTION`1_CREATE_OFFSET))(str, arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void Open(::System::Boolean arg, ::System::Boolean arg2, Il2CppObject* arg3, Il2CppObject* arg4, Il2CppObject* arg5)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_OPENUIACTION`1_OPEN_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void Open(::System::String* str, ::System::Boolean arg, ::System::Boolean arg2, Il2CppObject* arg3, Il2CppObject* arg4, Il2CppObject* arg5)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Boolean, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_OPENUIACTION`1_OPEN_OFFSET))(str, arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void .ctor(::System::String* str, Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_OPENUIACTION`1_.CTOR_OFFSET))(str, arg, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* CoExecute()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_OPENUIACTION`1_COEXECUTE_OFFSET))(nullptr);
		}

	};
}

