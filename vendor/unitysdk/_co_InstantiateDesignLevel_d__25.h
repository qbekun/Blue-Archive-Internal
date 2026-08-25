#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCSectionVisual; }

#define <CO_INSTANTIATEDESIGNLEVEL>D__25_.CTOR_OFFSET UNITYSDK_OFFSET(0xDADAC0)
#define <CO_INSTANTIATEDESIGNLEVEL>D__25_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xDAF100)
#define <CO_INSTANTIATEDESIGNLEVEL>D__25_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDAF110)
#define <CO_INSTANTIATEDESIGNLEVEL>D__25_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDAF3D0)
#define <CO_INSTANTIATEDESIGNLEVEL>D__25_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xDAF3E0)
#define <CO_INSTANTIATEDESIGNLEVEL>D__25_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDAF430)

	inline static constexpr unsigned int <co_InstantiateDesignLevel>d__25_TypeDefinitionIndex = 9921;

	class <co_InstantiateDesignLevel>d__25 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MXUnderCover::UCSectionVisual* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_INSTANTIATEDESIGNLEVEL>D__25_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_INSTANTIATEDESIGNLEVEL>D__25_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_INSTANTIATEDESIGNLEVEL>D__25_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_INSTANTIATEDESIGNLEVEL>D__25_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_INSTANTIATEDESIGNLEVEL>D__25_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_INSTANTIATEDESIGNLEVEL>D__25_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

