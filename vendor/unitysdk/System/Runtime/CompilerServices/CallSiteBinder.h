#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEBINDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x96B36B0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEBINDER_GET_UPDATELABEL_OFFSET UNITYSDK_OFFSET(0x96B36C0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEBINDER_BIND_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEBINDER_BINDDELEGATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEBINDER_BINDCORE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEBINDER_CACHETARGET_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEBINDER_STITCH_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEBINDER_GETRULECACHE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEBINDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x96B3710)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int CallSiteBinder_TypeDefinitionIndex = 33523;

	class CallSiteBinder : public Il2CppObject
	{
	public:
		Il2CppObject* Cache; // 0x10
		::System::Linq::Expressions::LabelTarget* _UpdateLabel_k__BackingField; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEBINDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::LabelTarget* get_UpdateLabel()
		{
			return (return (::System::Linq::Expressions::LabelTarget*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEBINDER_GET_UPDATELABEL_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* Bind(::Il2CppArray<::System::Object*>* arg, Il2CppObject* arg, ::System::Linq::Expressions::LabelTarget* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::Il2CppArray<::System::Object*>*, Il2CppObject*, ::System::Linq::Expressions::LabelTarget*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEBINDER_BIND_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* BindDelegate(Il2CppObject* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEBINDER_BINDDELEGATE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* BindCore(Il2CppObject* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEBINDER_BINDCORE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CacheTarget(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEBINDER_CACHETARGET_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Stitch(::System::Linq::Expressions::Expression* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(::System::Linq::Expressions::Expression*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEBINDER_STITCH_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetRuleCache()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEBINDER_GETRULECACHE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITEBINDER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

