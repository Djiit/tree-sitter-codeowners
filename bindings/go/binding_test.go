package tree_sitter_CODEOWNERS_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-CODEOWNERS"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_CODEOWNERS.Language())
	if language == nil {
		t.Errorf("Error loading Codeowners grammar")
	}
}
