#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class MiniGameAudioAnimatorExcel; }
class <>c__DisplayClass9_0;

#define <CREATEAUDIOPLAYINFOS>D__9_.CTOR_OFFSET UNITYSDK_OFFSET(0x1464D40)
#define <CREATEAUDIOPLAYINFOS>D__9_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1465C30)
#define <CREATEAUDIOPLAYINFOS>D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1465C40)
#define <CREATEAUDIOPLAYINFOS>D__9_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1465F70)
#define <CREATEAUDIOPLAYINFOS>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1465F80)
#define <CREATEAUDIOPLAYINFOS>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1465FD0)

	inline static constexpr unsigned int <CreateAudioPlayInfos>d__9_TypeDefinitionIndex = 15091;

	class <CreateAudioPlayInfos>d__9 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Data::Excel::MiniGameAudioAnimatorExcel* excel; // 0x20
		Il2CppObject* complete; // 0x30
		<>c__DisplayClass9_0* __8__1; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CREATEAUDIOPLAYINFOS>D__9_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATEAUDIOPLAYINFOS>D__9_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATEAUDIOPLAYINFOS>D__9_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATEAUDIOPLAYINFOS>D__9_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATEAUDIOPLAYINFOS>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATEAUDIOPLAYINFOS>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

