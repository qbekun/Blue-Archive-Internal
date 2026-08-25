#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::Service { class ProhibitWordType; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define <CODOWNLOADPROHIBITEDWORDLIST>D__14_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FD2830)
#define <CODOWNLOADPROHIBITEDWORDLIST>D__14_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FD2A70)
#define <CODOWNLOADPROHIBITEDWORDLIST>D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1FD2A80)
#define <CODOWNLOADPROHIBITEDWORDLIST>D__14_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1FD3250)
#define <CODOWNLOADPROHIBITEDWORDLIST>D__14_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1FD3260)
#define <CODOWNLOADPROHIBITEDWORDLIST>D__14_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1FD32B0)

	inline static constexpr unsigned int <CoDownloadProhibitedWordList>d__14_TypeDefinitionIndex = 3022;

	class <CoDownloadProhibitedWordList>d__14 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::String* url; // 0x20
		Il2CppObject* saveCallback; // 0x28
		::MX::GameLogic::Service::ProhibitWordType* prohibitType; // 0x30
		::UnityEngine::Networking::UnityWebRequest* _www_5__2; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CODOWNLOADPROHIBITEDWORDLIST>D__14_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CODOWNLOADPROHIBITEDWORDLIST>D__14_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CODOWNLOADPROHIBITEDWORDLIST>D__14_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CODOWNLOADPROHIBITEDWORDLIST>D__14_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CODOWNLOADPROHIBITEDWORDLIST>D__14_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CODOWNLOADPROHIBITEDWORDLIST>D__14_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

