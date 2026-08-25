#pragma once
#include "unitysdk.h"

class CharacterVisual;
namespace UnityEngine { class Transform; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace UnityEngine { class Vector3; }

#define MXROTATEBODYIK_COROTATEBODY_OFFSET UNITYSDK_OFFSET(0x20A8A10)
#define MXROTATEBODYIK_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x20A8AA0)
#define MXROTATEBODYIK_AWAKE_OFFSET UNITYSDK_OFFSET(0x20A9350)
#define MXROTATEBODYIK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20A9430)
#define MXROTATEBODYIK__COROTATEBODY_G__NEEDROTATETOCLOCKWISE|13_0_OFFSET UNITYSDK_OFFSET(0x20A94D0)
#define MXROTATEBODYIK_.CTOR_OFFSET UNITYSDK_OFFSET(0x20A9550)
#define MXROTATEBODYIK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x20A9560)
#define MXROTATEBODYIK_START_OFFSET UNITYSDK_OFFSET(0x20A9580)

	inline static constexpr unsigned int MxRotateBodyIK_TypeDefinitionIndex = 3545;

	class MxRotateBodyIK : public Il2CppObject
	{
	public:
		::System::Collections::IEnumerator* CoroutineRun; // 0x18
		CharacterVisual* Visual; // 0x20
		::UnityEngine::Transform* bodyBone; // 0x28
		::MX::Logic::BattleEntities::BattleEntity* entityBody; // 0x30
		::UnityEngine::Vector3* lastAngle; // 0x38
		::UnityEngine::Vector3* targetAngle; // 0x44
		::System::Int64 rotateSpeed; // 0x50
		::Il2CppArray<::System::Object*>* AditionalTransformsToRoateAroundBodyBone; // 0x58

		::System::Collections::IEnumerator* CoRotateBody()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXROTATEBODYIK_COROTATEBODY_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXROTATEBODYIK_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXROTATEBODYIK_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXROTATEBODYIK_ONENABLE_OFFSET))(nullptr);
		}

		::System::Boolean _CoRotateBody_g__NeedRotateToClockwise|13_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXROTATEBODYIK__COROTATEBODY_G__NEEDROTATETOCLOCKWISE|13_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXROTATEBODYIK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXROTATEBODYIK_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXROTATEBODYIK_START_OFFSET))(nullptr);
		}

	};

