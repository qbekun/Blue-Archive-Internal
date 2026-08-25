#pragma once
#include "unitysdk.h"

#define <<ONSTOPPED>G__RELEASE|18_0>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <<ONSTOPPED>G__RELEASE|18_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define <<ONSTOPPED>G__RELEASE|18_0>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define <<ONSTOPPED>G__RELEASE|18_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define <<ONSTOPPED>G__RELEASE|18_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x000000)
#define <<ONSTOPPED>G__RELEASE|18_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <<OnStopped>g__Release|18_0>d_TypeDefinitionIndex = 10375;

	class <<OnStopped>g__Release|18_0>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x0
		::System::Object* __2__current; // 0x0
		::System::String* p; // 0x0

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<ONSTOPPED>G__RELEASE|18_0>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONSTOPPED>G__RELEASE|18_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONSTOPPED>G__RELEASE|18_0>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONSTOPPED>G__RELEASE|18_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONSTOPPED>G__RELEASE|18_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONSTOPPED>G__RELEASE|18_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

