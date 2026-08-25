#pragma once
#include "unitysdk.h"

namespace TMPro { class TMP_SpriteAnimator; }
namespace TMPro { class TMP_SpriteAsset; }
namespace TMPro { class TMP_CharacterInfo; }
namespace TMPro { class TMP_MeshInfo; }

#define <DOSPRITEANIMATIONINTERNAL>D__7_.CTOR_OFFSET UNITYSDK_OFFSET(0xA177EF0)
#define <DOSPRITEANIMATIONINTERNAL>D__7_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xA177F60)
#define <DOSPRITEANIMATIONINTERNAL>D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA177F70)
#define <DOSPRITEANIMATIONINTERNAL>D__7_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA178C10)
#define <DOSPRITEANIMATIONINTERNAL>D__7_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xA178C20)
#define <DOSPRITEANIMATIONINTERNAL>D__7_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA178C70)

	inline static constexpr unsigned int <DoSpriteAnimationInternal>d__7_TypeDefinitionIndex = 33720;

	class <DoSpriteAnimationInternal>d__7 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::TMPro::TMP_SpriteAnimator* __4__this; // 0x20
		::System::Int32 start; // 0x28
		::System::Int32 end; // 0x2C
		::TMPro::TMP_SpriteAsset* spriteAsset; // 0x30
		::System::Int32 currentCharacter; // 0x38
		::System::Int32 framerate; // 0x3C
		::System::Int32 _currentFrame_5__2; // 0x40
		::TMPro::TMP_CharacterInfo* _charInfo_5__3; // 0x48
		::System::Int32 _materialIndex_5__4; // 0x1C0
		::System::Int32 _vertexIndex_5__5; // 0x1C4
		::TMPro::TMP_MeshInfo* _meshInfo_5__6; // 0x1C8
		::System::Single _baseSpriteScale_5__7; // 0x218
		::System::Single _elapsedTime_5__8; // 0x21C
		::System::Single _targetTime_5__9; // 0x220

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <DOSPRITEANIMATIONINTERNAL>D__7_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOSPRITEANIMATIONINTERNAL>D__7_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOSPRITEANIMATIONINTERNAL>D__7_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOSPRITEANIMATIONINTERNAL>D__7_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOSPRITEANIMATIONINTERNAL>D__7_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOSPRITEANIMATIONINTERNAL>D__7_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

