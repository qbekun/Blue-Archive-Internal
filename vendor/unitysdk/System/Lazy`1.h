#pragma once
#include "../unitysdk.h"

#define SYSTEM_LAZY`1_CREATEVIADEFAULTCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LAZY`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LAZY`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LAZY`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LAZY`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LAZY`1_VIACONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LAZY`1_VIAFACTORY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LAZY`1_EXECUTIONANDPUBLICATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LAZY`1_PUBLICATIONONLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LAZY`1_PUBLICATIONONLYVIACONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LAZY`1_PUBLICATIONONLYVIAFACTORY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LAZY`1_PUBLICATIONONLYWAITFOROTHERTHREADTOPUBLISH_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LAZY`1_CREATEVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LAZY`1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LAZY`1_GET_ISVALUECREATED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LAZY`1_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System
{
	inline static constexpr unsigned int Lazy`1_TypeDefinitionIndex = 23790;

	class Lazy`1 : public Il2CppObject
	{
	public:
		::System::LazyHelper* _state; // 0x0
		Il2CppObject* _factory; // 0x0
		Il2CppObject* _value; // 0x0

		Il2CppObject* CreateViaDefaultConstructor()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LAZY`1_CREATEVIADEFAULTCONSTRUCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LAZY`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LAZY`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LAZY`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::System::Threading::LazyThreadSafetyMode* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Threading::LazyThreadSafetyMode*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LAZY`1_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ViaConstructor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LAZY`1_VIACONSTRUCTOR_OFFSET))(nullptr);
		}

		::System::Void ViaFactory(::System::Threading::LazyThreadSafetyMode* arg)
		{
			((::System::Void(*)(::System::Threading::LazyThreadSafetyMode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LAZY`1_VIAFACTORY_OFFSET))(arg, nullptr);
		}

		::System::Void ExecutionAndPublication(::System::LazyHelper* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::LazyHelper*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LAZY`1_EXECUTIONANDPUBLICATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PublicationOnly(::System::LazyHelper* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::LazyHelper*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LAZY`1_PUBLICATIONONLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PublicationOnlyViaConstructor(::System::LazyHelper* arg)
		{
			((::System::Void(*)(::System::LazyHelper*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LAZY`1_PUBLICATIONONLYVIACONSTRUCTOR_OFFSET))(arg, nullptr);
		}

		::System::Void PublicationOnlyViaFactory(::System::LazyHelper* arg)
		{
			((::System::Void(*)(::System::LazyHelper*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LAZY`1_PUBLICATIONONLYVIAFACTORY_OFFSET))(arg, nullptr);
		}

		::System::Void PublicationOnlyWaitForOtherThreadToPublish()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LAZY`1_PUBLICATIONONLYWAITFOROTHERTHREADTOPUBLISH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateValue()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LAZY`1_CREATEVALUE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LAZY`1_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValueCreated()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LAZY`1_GET_ISVALUECREATED_OFFSET))(nullptr);
		}

		Il2CppObject* get_Value()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LAZY`1_GET_VALUE_OFFSET))(nullptr);
		}

	};
}

