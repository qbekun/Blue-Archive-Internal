#pragma once
#include "unitysdk.h"

#define RECORD_GET_HEADER_OFFSET UNITYSDK_OFFSET(0x000000)
#define RECORD_GET_RECORDINDEX_OFFSET UNITYSDK_OFFSET(0x000000)
#define RECORD_GET_VALID_OFFSET UNITYSDK_OFFSET(0x000000)
#define RECORD_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x000000)
#define RECORD_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x000000)
#define RECORD_GET_TIME_OFFSET UNITYSDK_OFFSET(0x000000)
#define RECORD_GET_CONTROL_OFFSET UNITYSDK_OFFSET(0x000000)
#define RECORD_GET_NEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define RECORD_GET_PREVIOUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define RECORD_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define RECORD_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define RECORD_READVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define RECORD_GETUNSAFEMEMORYPTR_OFFSET UNITYSDK_OFFSET(0x000000)
#define RECORD_GETUNSAFEMEMORYPTRUNCHECKED_OFFSET UNITYSDK_OFFSET(0x000000)
#define RECORD_GETUNSAFEEXTRAMEMORYPTR_OFFSET UNITYSDK_OFFSET(0x000000)
#define RECORD_GETUNSAFEEXTRAMEMORYPTRUNCHECKED_OFFSET UNITYSDK_OFFSET(0x000000)
#define RECORD_COPYFROM_OFFSET UNITYSDK_OFFSET(0x000000)
#define RECORD_CHECKVALID_OFFSET UNITYSDK_OFFSET(0x000000)
#define RECORD_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define RECORD_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define RECORD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define RECORD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int Record_TypeDefinitionIndex = 28827;

	class Record : public Il2CppObject
	{
	public:
		Il2CppObject* m_Owner; // 0x0
		::System::Int32 m_IndexPlusOne; // 0x0
		::System::UInt32 m_Version; // 0x0

		::System::Object** get_header()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + RECORD_GET_HEADER_OFFSET))(nullptr);
		}

		::System::Int32 get_recordIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RECORD_GET_RECORDINDEX_OFFSET))(nullptr);
		}

		::System::Boolean get_valid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RECORD_GET_VALID_OFFSET))(nullptr);
		}

		Il2CppObject* get_owner()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RECORD_GET_OWNER_OFFSET))(nullptr);
		}

		::System::Int32 get_index()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RECORD_GET_INDEX_OFFSET))(nullptr);
		}

		::System::Double get_time()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + RECORD_GET_TIME_OFFSET))(nullptr);
		}

		Il2CppObject* get_control()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RECORD_GET_CONTROL_OFFSET))(nullptr);
		}

		Il2CppObject* get_next()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RECORD_GET_NEXT_OFFSET))(nullptr);
		}

		Il2CppObject* get_previous()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RECORD_GET_PREVIOUS_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::System::Int32 arg, ::System::Object** arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + RECORD_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RECORD_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ReadValue()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RECORD_READVALUE_OFFSET))(nullptr);
		}

		::System::Object** GetUnsafeMemoryPtr()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + RECORD_GETUNSAFEMEMORYPTR_OFFSET))(nullptr);
		}

		::System::Object** GetUnsafeMemoryPtrUnchecked()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + RECORD_GETUNSAFEMEMORYPTRUNCHECKED_OFFSET))(nullptr);
		}

		::System::Object** GetUnsafeExtraMemoryPtr()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + RECORD_GETUNSAFEEXTRAMEMORYPTR_OFFSET))(nullptr);
		}

		::System::Object** GetUnsafeExtraMemoryPtrUnchecked()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + RECORD_GETUNSAFEEXTRAMEMORYPTRUNCHECKED_OFFSET))(nullptr);
		}

		::System::Void CopyFrom(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + RECORD_COPYFROM_OFFSET))(arg, nullptr);
		}

		::System::Void CheckValid()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RECORD_CHECKVALID_OFFSET))(nullptr);
		}

		::System::Boolean Equals(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + RECORD_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + RECORD_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RECORD_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RECORD_TOSTRING_OFFSET))(nullptr);
		}

	};

