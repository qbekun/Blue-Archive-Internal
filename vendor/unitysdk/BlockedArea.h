#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class BlockedAreaBattleItem; }
namespace MX::Core::Physics2D::Shapes { class Circle; }
class GroundGrid;
class GroundNode;

#define BLOCKEDAREA_GET_CIRCLE_OFFSET UNITYSDK_OFFSET(0x21552F0)
#define BLOCKEDAREA_SET_CIRCLE_OFFSET UNITYSDK_OFFSET(0x2155300)
#define BLOCKEDAREA_.CTOR_OFFSET UNITYSDK_OFFSET(0x2155310)
#define BLOCKEDAREA_EXPIRE_OFFSET UNITYSDK_OFFSET(0x21560D0)
#define BLOCKEDAREA_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x21560F0)
#define BLOCKEDAREA_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x2156160)
#define BLOCKEDAREA_CHECKGOTHROUGHAVAILABLE_OFFSET UNITYSDK_OFFSET(0x21561C0)
#define BLOCKEDAREA_RESETGOTHROUGHBLOCKED_OFFSET UNITYSDK_OFFSET(0x2156470)
#define BLOCKEDAREA_SETGOTHROUGHBLOCKED_OFFSET UNITYSDK_OFFSET(0x21559A0)

	inline static constexpr unsigned int BlockedArea_TypeDefinitionIndex = 3976;

	class BlockedArea : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* goThroughDirectionBlocked; // 0x10
		::System::Int32 startX; // 0x18
		::System::Int32 startY; // 0x1C
		::System::Int32 endX; // 0x20
		::System::Int32 endY; // 0x24
		::MX::Logic::BattleEntities::BlockedAreaBattleItem* owner; // 0x28
		::Il2CppArray<::System::Object*>* gridNonBlocked; // 0x30
		::MX::Core::Physics2D::Shapes::Circle* _Circle_k__BackingField; // 0x38

		::MX::Core::Physics2D::Shapes::Circle* get_Circle()
		{
			return ((::MX::Core::Physics2D::Shapes::Circle*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOCKEDAREA_GET_CIRCLE_OFFSET))(nullptr);
		}

		::System::Void set_Circle(::MX::Core::Physics2D::Shapes::Circle* arg)
		{
			((::System::Void(*)(::MX::Core::Physics2D::Shapes::Circle*, ::PVOID))((::PBYTE)hIl2Cpp + BLOCKEDAREA_SET_CIRCLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BlockedAreaBattleItem* arg, GroundGrid* arg2, ::MX::Core::Physics2D::Shapes::Circle* arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BlockedAreaBattleItem*, GroundGrid*, ::MX::Core::Physics2D::Shapes::Circle*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BLOCKEDAREA_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void Expire()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOCKEDAREA_EXPIRE_OFFSET))(nullptr);
		}

		::System::Boolean get_Item(GroundNode* arg)
		{
			return ((::System::Boolean(*)(GroundNode*, ::PVOID))((::PBYTE)hIl2Cpp + BLOCKEDAREA_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Item(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BLOCKEDAREA_GET_ITEM_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CheckGoThroughAvailable(GroundNode* arg, GroundNode* arg2)
		{
			return ((::System::Boolean(*)(GroundNode*, GroundNode*, ::PVOID))((::PBYTE)hIl2Cpp + BLOCKEDAREA_CHECKGOTHROUGHAVAILABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ResetGoThroughBlocked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOCKEDAREA_RESETGOTHROUGHBLOCKED_OFFSET))(nullptr);
		}

		::System::Void SetGoThroughBlocked(GroundGrid* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(GroundGrid*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BLOCKEDAREA_SETGOTHROUGHBLOCKED_OFFSET))(arg, arg2, nullptr);
		}

	};

