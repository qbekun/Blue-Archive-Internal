#pragma once
#include "unitysdk.h"

class CafeFurnitureLoader;

#define <YIELDREFRESHASSETANDATTACHCHARACTERS>D__26_.CTOR_OFFSET UNITYSDK_OFFSET(0x19B9B40)
#define <YIELDREFRESHASSETANDATTACHCHARACTERS>D__26_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x19BD8A0)
#define <YIELDREFRESHASSETANDATTACHCHARACTERS>D__26_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x19BD8B0)
#define <YIELDREFRESHASSETANDATTACHCHARACTERS>D__26_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19BDBF0)
#define <YIELDREFRESHASSETANDATTACHCHARACTERS>D__26_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x19BDC00)
#define <YIELDREFRESHASSETANDATTACHCHARACTERS>D__26_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19BDC50)

	inline static constexpr unsigned int <YieldRefreshAssetAndAttachCharacters>d__26_TypeDefinitionIndex = 1355;

	class <YieldRefreshAssetAndAttachCharacters>d__26 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		CafeFurnitureLoader* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <YIELDREFRESHASSETANDATTACHCHARACTERS>D__26_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <YIELDREFRESHASSETANDATTACHCHARACTERS>D__26_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <YIELDREFRESHASSETANDATTACHCHARACTERS>D__26_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <YIELDREFRESHASSETANDATTACHCHARACTERS>D__26_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <YIELDREFRESHASSETANDATTACHCHARACTERS>D__26_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <YIELDREFRESHASSETANDATTACHCHARACTERS>D__26_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

