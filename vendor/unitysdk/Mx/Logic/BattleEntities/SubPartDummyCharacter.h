#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class SubPartDummySetting; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Data::Excel { class CharacterExcel; }
namespace MX::Logic::BattleEntities { class O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a; }
namespace MX::Data::Excel { class CharacterAIExcel; }
namespace MX::Logic::Data { class WeaponSetting; }
namespace MX::Logic::Data { class GearSetting; }
namespace MX::Logic::Data { class CostumeSetting; }

#define MX_LOGIC_BATTLEENTITIES_SUBPARTDUMMYCHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x114D650)
#define MX_LOGIC_BATTLEENTITIES_SUBPARTDUMMYCHARACTER_GET_SUBPARTDUMMYSETTING_OFFSET UNITYSDK_OFFSET(0x114D7C0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int SubPartDummyCharacter_TypeDefinitionIndex = 13130;

	class SubPartDummyCharacter : public Il2CppObject
	{
	public:
		::MX::Logic::Data::SubPartDummySetting* _SubPartDummySetting_k__BackingField; // 0x488

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Data::Excel::CharacterExcel* arg3, ::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a* arg4, ::MX::Data::Excel::CharacterAIExcel* arg5, ::MX::Logic::Data::WeaponSetting* arg6, ::MX::Logic::Data::GearSetting* arg7, ::MX::Logic::Data::CostumeSetting* arg8, ::MX::Logic::Data::SubPartDummySetting* arg9)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Data::Excel::CharacterExcel*, ::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a*, ::MX::Data::Excel::CharacterAIExcel*, ::MX::Logic::Data::WeaponSetting*, ::MX::Logic::Data::GearSetting*, ::MX::Logic::Data::CostumeSetting*, ::MX::Logic::Data::SubPartDummySetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUBPARTDUMMYCHARACTER_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, nullptr);
		}

		::MX::Logic::Data::SubPartDummySetting* get_SubPartDummySetting()
		{
			return ((::MX::Logic::Data::SubPartDummySetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SUBPARTDUMMYCHARACTER_GET_SUBPARTDUMMYSETTING_OFFSET))(nullptr);
		}

	};
}

