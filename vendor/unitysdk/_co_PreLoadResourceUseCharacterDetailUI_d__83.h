#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class CostumeExcel; }
namespace MX::Data::Excel { class CharacterExcel; }
class <>c__DisplayClass83_0;

#define <CO_PRELOADRESOURCEUSECHARACTERDETAILUI>D__83_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FF9340)
#define <CO_PRELOADRESOURCEUSECHARACTERDETAILUI>D__83_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FF9360)
#define <CO_PRELOADRESOURCEUSECHARACTERDETAILUI>D__83_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1FF9370)
#define <CO_PRELOADRESOURCEUSECHARACTERDETAILUI>D__83_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1FF9FE0)
#define <CO_PRELOADRESOURCEUSECHARACTERDETAILUI>D__83_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1FF9FF0)
#define <CO_PRELOADRESOURCEUSECHARACTERDETAILUI>D__83_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1FFA040)

	inline static constexpr unsigned int <co_PreLoadResourceUseCharacterDetailUI>d__83_TypeDefinitionIndex = 3082;

	class <co_PreLoadResourceUseCharacterDetailUI>d__83 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Data::Excel::CostumeExcel* costumeExcel; // 0x20
		::MX::Data::Excel::CharacterExcel* charExcel; // 0x30
		<>c__DisplayClass83_0* __8__1; // 0x40
		::System::Action* callback; // 0x48

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_PRELOADRESOURCEUSECHARACTERDETAILUI>D__83_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PRELOADRESOURCEUSECHARACTERDETAILUI>D__83_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PRELOADRESOURCEUSECHARACTERDETAILUI>D__83_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PRELOADRESOURCEUSECHARACTERDETAILUI>D__83_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PRELOADRESOURCEUSECHARACTERDETAILUI>D__83_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PRELOADRESOURCEUSECHARACTERDETAILUI>D__83_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

