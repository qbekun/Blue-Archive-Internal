#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class RootMotionFlat; }
namespace MX::Logic::Data { class CharacterFormRootMotion; }
namespace MX::Logic::Data { class RootMotionFrame; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace FlatData { class CoverMotionType; }
namespace MX::Logic::BattleEntities { class BehaviorType; }

#define MX_LOGIC_DATA_ROOTMOTIONSERVICE_GETROOTMOTIONFLAT_OFFSET UNITYSDK_OFFSET(0x1220BB0)
#define MX_LOGIC_DATA_ROOTMOTIONSERVICE_CREATECHARACTERFORMROOTMOTIONS_OFFSET UNITYSDK_OFFSET(0x1220D20)
#define MX_LOGIC_DATA_ROOTMOTIONSERVICE_CREATECHARACTERFORMROOTMOTION_OFFSET UNITYSDK_OFFSET(0x1220EA0)
#define MX_LOGIC_DATA_ROOTMOTIONSERVICE_CREATEEXSKILLROOTMOTION_OFFSET UNITYSDK_OFFSET(0x1221390)
#define MX_LOGIC_DATA_ROOTMOTIONSERVICE_CREATEMOVELEFTROOTMOTION_OFFSET UNITYSDK_OFFSET(0x12215D0)
#define MX_LOGIC_DATA_ROOTMOTIONSERVICE_CREATEMOVERIGHTROOTMOTION_OFFSET UNITYSDK_OFFSET(0x12216B0)
#define MX_LOGIC_DATA_ROOTMOTIONSERVICE_GETROOTMOTIONFRAME_OFFSET UNITYSDK_OFFSET(0x1221790)
#define MX_LOGIC_DATA_ROOTMOTIONSERVICE_GETROOTMOTIONFRAME_OFFSET UNITYSDK_OFFSET(0x1221840)
#define MX_LOGIC_DATA_ROOTMOTIONSERVICE_GETEXSKILLROOTMOTIONFRAME_OFFSET UNITYSDK_OFFSET(0x12218C0)
#define MX_LOGIC_DATA_ROOTMOTIONSERVICE_GETPUBLICSKILLROOTMOTIONFRAME_OFFSET UNITYSDK_OFFSET(0x1221900)
#define MX_LOGIC_DATA_ROOTMOTIONSERVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1221950)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int RootMotionService_TypeDefinitionIndex = 13741;

	class RootMotionService : public Il2CppObject
	{
	public:
		::FlatData::RootMotionFlat* GetRootMotionFlat(::System::String* str)
		{
			return ((::FlatData::RootMotionFlat*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ROOTMOTIONSERVICE_GETROOTMOTIONFLAT_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* CreateCharacterFormRootMotions(::FlatData::RootMotionFlat* arg)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::FlatData::RootMotionFlat*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ROOTMOTIONSERVICE_CREATECHARACTERFORMROOTMOTIONS_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::CharacterFormRootMotion* CreateCharacterFormRootMotion(Il2CppObject* arg)
		{
			return ((::MX::Logic::Data::CharacterFormRootMotion*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ROOTMOTIONSERVICE_CREATECHARACTERFORMROOTMOTION_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* CreateExSkillRootMotion(::FlatData::RootMotionFlat* arg)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::FlatData::RootMotionFlat*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ROOTMOTIONSERVICE_CREATEEXSKILLROOTMOTION_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::RootMotionFrame* CreateMoveLeftRootMotion(::FlatData::RootMotionFlat* arg)
		{
			return ((::MX::Logic::Data::RootMotionFrame*(*)(::FlatData::RootMotionFlat*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ROOTMOTIONSERVICE_CREATEMOVELEFTROOTMOTION_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::RootMotionFrame* CreateMoveRightRootMotion(::FlatData::RootMotionFlat* arg)
		{
			return ((::MX::Logic::Data::RootMotionFrame*(*)(::FlatData::RootMotionFlat*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ROOTMOTIONSERVICE_CREATEMOVERIGHTROOTMOTION_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::RootMotionFrame* GetRootMotionFrame(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, ::FlatData::CoverMotionType* arg2, ::System::Int32 arg3)
		{
			return ((::MX::Logic::Data::RootMotionFrame*(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::FlatData::CoverMotionType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ROOTMOTIONSERVICE_GETROOTMOTIONFRAME_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Logic::Data::RootMotionFrame* GetRootMotionFrame(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, ::MX::Logic::BattleEntities::BehaviorType* arg2)
		{
			return ((::MX::Logic::Data::RootMotionFrame*(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::MX::Logic::BattleEntities::BehaviorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ROOTMOTIONSERVICE_GETROOTMOTIONFRAME_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::Data::RootMotionFrame* GetExSkillRootMotionFrame(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, ::System::Int32 arg2)
		{
			return ((::MX::Logic::Data::RootMotionFrame*(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ROOTMOTIONSERVICE_GETEXSKILLROOTMOTIONFRAME_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::Data::RootMotionFrame* GetPublicSkillRootMotionFrame(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, ::System::Int32 arg2)
		{
			return ((::MX::Logic::Data::RootMotionFrame*(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ROOTMOTIONSERVICE_GETPUBLICSKILLROOTMOTIONFRAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ROOTMOTIONSERVICE_.CTOR_OFFSET))(nullptr);
		}

	};
}

