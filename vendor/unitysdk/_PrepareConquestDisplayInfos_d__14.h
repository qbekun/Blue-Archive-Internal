#pragma once
#include "unitysdk.h"

class ConquestEventDisplayer;

#define <PREPARECONQUESTDISPLAYINFOS>D__14_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BD8D90)
#define <PREPARECONQUESTDISPLAYINFOS>D__14_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BD8DB0)
#define <PREPARECONQUESTDISPLAYINFOS>D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BD8DC0)
#define <PREPARECONQUESTDISPLAYINFOS>D__14_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BDBD00)
#define <PREPARECONQUESTDISPLAYINFOS>D__14_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1BDBD10)
#define <PREPARECONQUESTDISPLAYINFOS>D__14_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BDBD60)

	inline static constexpr unsigned int <PrepareConquestDisplayInfos>d__14_TypeDefinitionIndex = 1479;

	class <PrepareConquestDisplayInfos>d__14 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		ConquestEventDisplayer* __4__this; // 0x20
		Il2CppObject* conquestDisplayInfos; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PREPARECONQUESTDISPLAYINFOS>D__14_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PREPARECONQUESTDISPLAYINFOS>D__14_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PREPARECONQUESTDISPLAYINFOS>D__14_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PREPARECONQUESTDISPLAYINFOS>D__14_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PREPARECONQUESTDISPLAYINFOS>D__14_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PREPARECONQUESTDISPLAYINFOS>D__14_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

