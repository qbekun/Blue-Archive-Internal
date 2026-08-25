#pragma once
#include "unitysdk.h"

class UIPatchDownload;

#define <PRECHECKFORENTERGAME>D__41_.CTOR_OFFSET UNITYSDK_OFFSET(0xCC4AC0)
#define <PRECHECKFORENTERGAME>D__41_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xCC4AE0)
#define <PRECHECKFORENTERGAME>D__41_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xCC4AF0)
#define <PRECHECKFORENTERGAME>D__41_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCC4D30)
#define <PRECHECKFORENTERGAME>D__41_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xCC4D40)
#define <PRECHECKFORENTERGAME>D__41_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCC4D90)

	inline static constexpr unsigned int <PreCheckForEnterGame>d__41_TypeDefinitionIndex = 9113;

	class <PreCheckForEnterGame>d__41 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIPatchDownload* __4__this; // 0x20
		Il2CppObject* isComplete; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PRECHECKFORENTERGAME>D__41_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PRECHECKFORENTERGAME>D__41_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PRECHECKFORENTERGAME>D__41_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PRECHECKFORENTERGAME>D__41_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PRECHECKFORENTERGAME>D__41_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PRECHECKFORENTERGAME>D__41_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

