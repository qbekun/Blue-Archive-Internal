#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_THREADLOCAL`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_THREADLOCAL`1_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_THREADLOCAL`1_FINALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_THREADLOCAL`1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_THREADLOCAL`1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_THREADLOCAL`1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_THREADLOCAL`1_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_THREADLOCAL`1_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_THREADLOCAL`1_GETVALUESLOW_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_THREADLOCAL`1_SETVALUESLOW_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_THREADLOCAL`1_CREATELINKEDSLOT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_THREADLOCAL`1_GET_ISVALUECREATED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_THREADLOCAL`1_GROWTABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_THREADLOCAL`1_GETNEWTABLESIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_THREADLOCAL`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Threading
{
	inline static constexpr unsigned int ThreadLocal`1_TypeDefinitionIndex = 24081;

	class ThreadLocal`1 : public Il2CppObject
	{
	public:
		Il2CppObject* m_valueFactory; // 0x0
		::Il2CppArray<::System::Object*>* ts_slotArray;
		Il2CppObject* ts_finalizationHelper;
		::System::Int32 m_idComplement; // 0x0
		::System::Boolean m_initialized; // 0x0
		Il2CppObject* s_idManager; // 0x0
		Il2CppObject* m_linkedSlot; // 0x0
		::System::Boolean m_trackAllValues; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADLOCAL`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADLOCAL`1_INITIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADLOCAL`1_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADLOCAL`1_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADLOCAL`1_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADLOCAL`1_TOSTRING_OFFSET))(nullptr);
		}

		Il2CppObject* get_Value()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADLOCAL`1_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADLOCAL`1_SET_VALUE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetValueSlow()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADLOCAL`1_GETVALUESLOW_OFFSET))(nullptr);
		}

		::System::Void SetValueSlow(Il2CppObject* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADLOCAL`1_SETVALUESLOW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CreateLinkedSlot(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADLOCAL`1_CREATELINKEDSLOT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean get_IsValueCreated()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADLOCAL`1_GET_ISVALUECREATED_OFFSET))(nullptr);
		}

		::System::Void GrowTable(::System::Object[]&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object[]&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADLOCAL`1_GROWTABLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetNewTableSize(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADLOCAL`1_GETNEWTABLESIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADLOCAL`1_.CCTOR_OFFSET))(nullptr);
		}

	};
}

