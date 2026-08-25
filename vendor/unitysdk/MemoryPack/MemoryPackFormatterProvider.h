#pragma once
#include "../unitysdk.h"

namespace MemoryPack { class IMemoryPackFormatter; }

#define MEMORYPACK_MEMORYPACKFORMATTERPROVIDER_REGISTERINITIALFORMATTERS_OFFSET UNITYSDK_OFFSET(0x90580B0)
#define MEMORYPACK_MEMORYPACKFORMATTERPROVIDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9058890)
#define MEMORYPACK_MEMORYPACKFORMATTERPROVIDER_ISREGISTERED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKFORMATTERPROVIDER_REGISTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKFORMATTERPROVIDER_REGISTERGENERICTYPE_OFFSET UNITYSDK_OFFSET(0x905B990)
#define MEMORYPACK_MEMORYPACKFORMATTERPROVIDER_REGISTERCOLLECTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKFORMATTERPROVIDER_REGISTERCOLLECTION_OFFSET UNITYSDK_OFFSET(0x905BB50)
#define MEMORYPACK_MEMORYPACKFORMATTERPROVIDER_REGISTERSET_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKFORMATTERPROVIDER_REGISTERSET_OFFSET UNITYSDK_OFFSET(0x905BCD0)
#define MEMORYPACK_MEMORYPACKFORMATTERPROVIDER_REGISTERDICTIONARY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKFORMATTERPROVIDER_REGISTERDICTIONARY_OFFSET UNITYSDK_OFFSET(0x905BE50)
#define MEMORYPACK_MEMORYPACKFORMATTERPROVIDER_GETFORMATTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKFORMATTERPROVIDER_GETFORMATTER_OFFSET UNITYSDK_OFFSET(0x905BFD0)
#define MEMORYPACK_MEMORYPACKFORMATTERPROVIDER_TRYINVOKEREGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x905C530)
#define MEMORYPACK_MEMORYPACKFORMATTERPROVIDER_CREATEGENERICFORMATTER_OFFSET UNITYSDK_OFFSET(0x905C8B0)
#define MEMORYPACK_MEMORYPACKFORMATTERPROVIDER_TRYCREATEGENERICFORMATTERTYPE_OFFSET UNITYSDK_OFFSET(0x905CE30)
#define MEMORYPACK_MEMORYPACKFORMATTERPROVIDER_TRYCREATEGENERICCOLLECTIONFORMATTERTYPE_OFFSET UNITYSDK_OFFSET(0x905CF60)
#define MEMORYPACK_MEMORYPACKFORMATTERPROVIDER_REGISTERWELLKNOWNTYPESFORMATTERS_OFFSET UNITYSDK_OFFSET(0x90595F0)
#define MEMORYPACK_MEMORYPACKFORMATTERPROVIDER_UNITYREGISTER_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MemoryPack
{
	inline static constexpr unsigned int MemoryPackFormatterProvider_TypeDefinitionIndex = 35415;

	class MemoryPackFormatterProvider : public Il2CppObject
	{
	public:
		Il2CppObject* ArrayLikeFormatters; // 0x0
		Il2CppObject* CollectionFormatters; // 0x8
		Il2CppObject* InterfaceCollectionFormatters; // 0x10
		Il2CppObject* formatters; // 0x18
		Il2CppObject* genericFormatterFactory; // 0x20
		Il2CppObject* genericCollectionFormatterFactory; // 0x28
		Il2CppObject* KnownGenericTypeFormatters; // 0x30

		::System::Void RegisterInitialFormatters()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKFORMATTERPROVIDER_REGISTERINITIALFORMATTERS_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKFORMATTERPROVIDER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsRegistered()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKFORMATTERPROVIDER_ISREGISTERED_OFFSET))(nullptr);
		}

		::System::Void Register(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKFORMATTERPROVIDER_REGISTER_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterGenericType(::System::Type* arg, ::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKFORMATTERPROVIDER_REGISTERGENERICTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterCollection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKFORMATTERPROVIDER_REGISTERCOLLECTION_OFFSET))(nullptr);
		}

		::System::Void RegisterCollection(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKFORMATTERPROVIDER_REGISTERCOLLECTION_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterSet()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKFORMATTERPROVIDER_REGISTERSET_OFFSET))(nullptr);
		}

		::System::Void RegisterSet(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKFORMATTERPROVIDER_REGISTERSET_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterDictionary()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKFORMATTERPROVIDER_REGISTERDICTIONARY_OFFSET))(nullptr);
		}

		::System::Void RegisterDictionary(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKFORMATTERPROVIDER_REGISTERDICTIONARY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetFormatter()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKFORMATTERPROVIDER_GETFORMATTER_OFFSET))(nullptr);
		}

		::MemoryPack::IMemoryPackFormatter* GetFormatter(::System::Type* arg)
		{
			return (return (::MemoryPack::IMemoryPackFormatter*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKFORMATTERPROVIDER_GETFORMATTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryInvokeRegisterFormatter(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKFORMATTERPROVIDER_TRYINVOKEREGISTERFORMATTER_OFFSET))(arg, nullptr);
		}

		::System::Object* CreateGenericFormatter(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKFORMATTERPROVIDER_CREATEGENERICFORMATTER_OFFSET))(arg, arg, nullptr);
		}

		::System::Type* TryCreateGenericFormatterType(::System::Type* arg, Il2CppObject* arg)
		{
			return (return (::System::Type*(*)(::System::Type*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKFORMATTERPROVIDER_TRYCREATEGENERICFORMATTERTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Type* TryCreateGenericCollectionFormatterType(::System::Type* arg)
		{
			return (return (::System::Type*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKFORMATTERPROVIDER_TRYCREATEGENERICCOLLECTIONFORMATTERTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterWellKnownTypesFormatters()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKFORMATTERPROVIDER_REGISTERWELLKNOWNTYPESFORMATTERS_OFFSET))(nullptr);
		}

		::System::Void UnityRegister()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKFORMATTERPROVIDER_UNITYREGISTER_OFFSET))(nullptr);
		}

	};
}

