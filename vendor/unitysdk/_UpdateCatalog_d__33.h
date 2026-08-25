#pragma once
#include "unitysdk.h"

namespace MX::AssetBundles { class IPatchStrategy; }
namespace MX::AssetBundles { class ResourcePatcher; }

#define <UPDATECATALOG>D__33_.CTOR_OFFSET UNITYSDK_OFFSET(0x144ED00)
#define <UPDATECATALOG>D__33_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1450380)
#define <UPDATECATALOG>D__33_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1450390)
#define <UPDATECATALOG>D__33_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1450A20)
#define <UPDATECATALOG>D__33_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1450A30)
#define <UPDATECATALOG>D__33_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1450A80)

	inline static constexpr unsigned int <UpdateCatalog>d__33_TypeDefinitionIndex = 14994;

	class <UpdateCatalog>d__33 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::AssetBundles::IPatchStrategy* strategy; // 0x20
		::MX::AssetBundles::ResourcePatcher* __4__this; // 0x28
		Il2CppObject* result; // 0x30
		::System::String* _remoteHash_5__2; // 0x38
		Il2CppObject* _hashRoutine_5__3; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <UPDATECATALOG>D__33_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <UPDATECATALOG>D__33_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <UPDATECATALOG>D__33_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <UPDATECATALOG>D__33_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <UPDATECATALOG>D__33_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <UPDATECATALOG>D__33_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

