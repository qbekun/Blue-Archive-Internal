#pragma once
#include "unitysdk.h"

class AccountLevelExpIndicator;
namespace MX::Data { class AccountExpInfoData; }

#define <COUPDATE>D__41_.CTOR_OFFSET UNITYSDK_OFFSET(0xB87360)
#define <COUPDATE>D__41_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xB87400)
#define <COUPDATE>D__41_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB87410)
#define <COUPDATE>D__41_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB87970)
#define <COUPDATE>D__41_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xB87980)
#define <COUPDATE>D__41_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB879D0)

	inline static constexpr unsigned int <CoUpdate>d__41_TypeDefinitionIndex = 8543;

	class <CoUpdate>d__41 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		AccountLevelExpIndicator* __4__this; // 0x20
		::System::Int32 _currentLevel_5__2; // 0x28
		::System::Single _currentExp_5__3; // 0x2C
		::MX::Data::AccountExpInfoData* _data_5__4; // 0x30
		::System::Single _expDiff_5__5; // 0x38
		::System::Int64 _maxExp_5__6; // 0x40
		::System::Single _restExp_5__7; // 0x48

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COUPDATE>D__41_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COUPDATE>D__41_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COUPDATE>D__41_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COUPDATE>D__41_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COUPDATE>D__41_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COUPDATE>D__41_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

