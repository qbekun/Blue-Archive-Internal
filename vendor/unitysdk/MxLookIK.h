#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }

#define MXLOOKIK_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x20A7F30)
#define MXLOOKIK_.CTOR_OFFSET UNITYSDK_OFFSET(0x20A8860)
#define MXLOOKIK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x20A8870)

	inline static constexpr unsigned int MxLookIK_TypeDefinitionIndex = 3543;

	class MxLookIK : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* target; // 0x40
		::UnityEngine::Transform* headBone; // 0x48
		::Il2CppArray<::System::Object*>* eyes; // 0x50
		::System::Single customMinRotationDegree; // 0x58
		::System::Single customMaxRotationDegree; // 0x5C

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXLOOKIK_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXLOOKIK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXLOOKIK_INITIALIZE_OFFSET))(nullptr);
		}

	};

