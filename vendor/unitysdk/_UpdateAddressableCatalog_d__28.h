#pragma once
#include "unitysdk.h"

namespace MX::AssetBundles { class ResourcePatcher; }

#define <UPDATEADDRESSABLECATALOG>D__28_.CTOR_OFFSET UNITYSDK_OFFSET(0x144E750)
#define <UPDATEADDRESSABLECATALOG>D__28_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x14500E0)
#define <UPDATEADDRESSABLECATALOG>D__28_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x14500F0)
#define <UPDATEADDRESSABLECATALOG>D__28_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1450150)
#define <UPDATEADDRESSABLECATALOG>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1450160)
#define <UPDATEADDRESSABLECATALOG>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14501B0)

	inline static constexpr unsigned int <UpdateAddressableCatalog>d__28_TypeDefinitionIndex = 14991;

	class <UpdateAddressableCatalog>d__28 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::AssetBundles::ResourcePatcher* __4__this; // 0x20
		Il2CppObject* result; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <UPDATEADDRESSABLECATALOG>D__28_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <UPDATEADDRESSABLECATALOG>D__28_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <UPDATEADDRESSABLECATALOG>D__28_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <UPDATEADDRESSABLECATALOG>D__28_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <UPDATEADDRESSABLECATALOG>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <UPDATEADDRESSABLECATALOG>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

