#pragma once
#include "../../unitysdk.h"

namespace MX::Logic::Data { class BattleTypes; }

#define MX_SAVEDATA_GAMESPEEDSAVEDATA_O0A14C7717DB9CA9CBAE7E40FA80DB2FCD9FD2AA7BEAF37B81928253BE3E9942F_OFFSET UNITYSDK_OFFSET(0x1CF3ED0)
#define MX_SAVEDATA_GAMESPEEDSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CF8140)
#define MX_SAVEDATA_GAMESPEEDSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CF81C0)
#define MX_SAVEDATA_GAMESPEEDSAVEDATA_O567893A98A4F2D79B37AF9FF131C534D69D167D1D8B919AEACC2E958D7873EE7_OFFSET UNITYSDK_OFFSET(0x1CF5EE0)
#define MX_SAVEDATA_GAMESPEEDSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CF8240)
#define MX_SAVEDATA_GAMESPEEDSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1CF8480)

namespace MX::SaveData
{
	inline static constexpr unsigned int GameSpeedSaveData_TypeDefinitionIndex = 19911;

	class GameSpeedSaveData : public Il2CppObject
	{
	public:
		Il2CppObject* GameSpeedTable; // 0x10

		Il2CppObject* O0a14c7717db9ca9cbae7e40fa80db2fcd9fd2aa7beaf37b81928253be3e9942f(::MX::Logic::Data::BattleTypes* arg)
		{
			return (return (Il2CppObject*(*)(::MX::Logic::Data::BattleTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_GAMESPEEDSAVEDATA_O0A14C7717DB9CA9CBAE7E40FA80DB2FCD9FD2AA7BEAF37B81928253BE3E9942F_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_GAMESPEEDSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_GAMESPEEDSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		Il2CppObject* O567893a98a4f2d79b37af9ff131c534d69d167d1d8b919aeacc2e958d7873ee7(::MX::Logic::Data::BattleTypes* arg)
		{
			return (return (Il2CppObject*(*)(::MX::Logic::Data::BattleTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_GAMESPEEDSAVEDATA_O567893A98A4F2D79B37AF9FF131C534D69D167D1D8B919AEACC2E958D7873EE7_OFFSET))(arg, nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_GAMESPEEDSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_GAMESPEEDSAVEDATA_CLONE_OFFSET))(nullptr);
		}

	};
}

