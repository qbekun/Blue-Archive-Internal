#pragma once
#include "unitysdk.h"

#define XHASHTABLESTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define XHASHTABLESTATE_RESIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define XHASHTABLESTATE_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define XHASHTABLESTATE_TRYADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define XHASHTABLESTATE_FINDENTRY_OFFSET UNITYSDK_OFFSET(0x000000)
#define XHASHTABLESTATE_COMPUTEHASHCODE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int XHashtableState_TypeDefinitionIndex = 37300;

	class XHashtableState : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _buckets; // 0x0
		::Il2CppArray<::System::Object*>* _entries; // 0x0
		::System::Int32 _numEntries; // 0x0
		Il2CppObject* _extractKey; // 0x0

		::System::Void .ctor(Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + XHASHTABLESTATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Resize()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + XHASHTABLESTATE_RESIZE_OFFSET))(nullptr);
		}

		::System::Boolean TryGetValue(::System::String* str, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Int32, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + XHASHTABLESTATE_TRYGETVALUE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Boolean TryAdd(Il2CppObject* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + XHASHTABLESTATE_TRYADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean FindEntry(::System::Int32 arg, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + XHASHTABLESTATE_FINDENTRY_OFFSET))(arg, str, arg, arg, arg, nullptr);
		}

		::System::Int32 ComputeHashCode(::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + XHASHTABLESTATE_COMPUTEHASHCODE_OFFSET))(str, arg, arg, nullptr);
		}

	};

