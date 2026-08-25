#pragma once
#include "unitysdk.h"

namespace MX::AssetBundles { class ResourceLoader; }
namespace MX::Core::Diagnostics { class SectionProfiler; }

#define <INITIALIZEADDRESSABLES>D__2_.CTOR_OFFSET UNITYSDK_OFFSET(0x14456C0)
#define <INITIALIZEADDRESSABLES>D__2_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1446040)
#define <INITIALIZEADDRESSABLES>D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1446100)
#define <INITIALIZEADDRESSABLES>D__2___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x14463B0)
#define <INITIALIZEADDRESSABLES>D__2_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1446460)
#define <INITIALIZEADDRESSABLES>D__2_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1446470)
#define <INITIALIZEADDRESSABLES>D__2_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14464C0)

	inline static constexpr unsigned int <InitializeAddressables>d__2_TypeDefinitionIndex = 14952;

	class <InitializeAddressables>d__2 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::AssetBundles::ResourceLoader* __4__this; // 0x20
		::MX::Core::Diagnostics::SectionProfiler* _profiler_5__2; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <INITIALIZEADDRESSABLES>D__2_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <INITIALIZEADDRESSABLES>D__2_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <INITIALIZEADDRESSABLES>D__2_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <INITIALIZEADDRESSABLES>D__2___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <INITIALIZEADDRESSABLES>D__2_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <INITIALIZEADDRESSABLES>D__2_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <INITIALIZEADDRESSABLES>D__2_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

