#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITE`1_GET_UPDATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITE`1_CREATEMATCHMAKER_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITE`1_CREATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITE`1_GETUPDATEDELEGATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITE`1_GETUPDATEDELEGATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITE`1_ADDRULE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITE`1_MOVERULE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITE`1_MAKEUPDATEDELEGATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITE`1_CREATECUSTOMUPDATEDELEGATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITE`1_CREATECUSTOMNOMATCHDELEGATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITE`1_CONVERT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int CallSite`1_TypeDefinitionIndex = 33521;

	class CallSite`1 : public Il2CppObject
	{
	public:
		Il2CppObject* Target; // 0x0
		::Il2CppArray<::System::Object*>* Rules; // 0x0
		Il2CppObject* s_cachedUpdate; // 0x0
		Il2CppObject* s_cachedNoMatch; // 0x0

		Il2CppObject* get_Update()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITE`1_GET_UPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Runtime::CompilerServices::CallSiteBinder* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::CallSiteBinder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITE`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITE`1_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMatchMaker()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITE`1_CREATEMATCHMAKER_OFFSET))(nullptr);
		}

		Il2CppObject* Create(::System::Runtime::CompilerServices::CallSiteBinder* arg)
		{
			return (return (Il2CppObject*(*)(::System::Runtime::CompilerServices::CallSiteBinder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITE`1_CREATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetUpdateDelegate()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITE`1_GETUPDATEDELEGATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetUpdateDelegate(Il2CppObject&* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITE`1_GETUPDATEDELEGATE_OFFSET))(arg, nullptr);
		}

		::System::Void AddRule(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITE`1_ADDRULE_OFFSET))(arg, nullptr);
		}

		::System::Void MoveRule(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITE`1_MOVERULE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* MakeUpdateDelegate()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITE`1_MAKEUPDATEDELEGATE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCustomUpdateDelegate(::System::Reflection::MethodInfo* arg)
		{
			return (return (Il2CppObject*(*)(::System::Reflection::MethodInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITE`1_CREATECUSTOMUPDATEDELEGATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CreateCustomNoMatchDelegate(::System::Reflection::MethodInfo* arg)
		{
			return (return (Il2CppObject*(*)(::System::Reflection::MethodInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITE`1_CREATECUSTOMNOMATCHDELEGATE_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* Convert(::System::Linq::Expressions::Expression* arg, ::System::Type* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Linq::Expressions::Expression*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITE`1_CONVERT_OFFSET))(arg, arg, nullptr);
		}

	};
}

